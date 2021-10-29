class Solution {
public:
    int count[5001];
    int hIndex(vector<int>& c) {
        
        int max=0;
        for(int i=0;i<c.size();i++)
        {
            count[c[i]]++;
            if(max<c[i])
            {
                max=c[i];
            }
        }
        
        int cnt=0;
        
        for(int i=max;i>=0;i--)
        {
            cnt+=count[i];
            
            if(cnt>=i)
            {
                return i;
            }
        }
        
        
        return 0;
        
    }
};
