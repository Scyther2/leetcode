class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int,int>m;
        
        int ans=0;
        
        for(int i=0;i<time.size();i++)
        {
            int x;
            if(time[i]%60==0)
            {
                x=0;
            }
            else
            {
                x=60-time[i]%60;
            }
            if(m.find(x)!=m.end())
            {
                auto it=m.find(x);
                ans+=it->second;
            }
            m[time[i]%60]++;
        }
        
        return ans;
        
    }
};
