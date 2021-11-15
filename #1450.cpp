class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        vector<int>sec(1001);
        
        unordered_map<int,int>ma,mb;
        
        int n=startTime.size();
        
        for(int i=0;i<n;i++)
        {
            ma[startTime[i]]++;
            mb[endTime[i]]++;
        }
        
        int st=0;
        
        for(int i=0;i<1001;i++)
        {
            auto it1=ma.find(i);
            auto it2=mb.find(i-1);
            
            if(it1!=ma.end())
            {
                st+=it1->second;
            }
            if(it2!=mb.end())
            {
                st-=it2->second;
            }
            
            sec[i]=st;            
        }
        
        
        return sec[queryTime];
        
        
    }
};
