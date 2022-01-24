class Solution {
public:
    int minFlips(int a, int b, int c) {
        
        int ans=0;
        
        for(int i=0;i<31;i++)
        {
            // cout<<(c&(1<<i))<<" ";
            if((c&(1<<i))!=0)
            {
                if(((a|b)&(1<<i))==0)
                {
                    ans++;
                }
                // cout<<10<<endl;
            }
            else
            {
                if((a&(1<<i))!=0)
                {
                    ans++;
                }
                if((b&(1<<i))!=0)
                {
                    ans++;
                }
                // cout<<11<<endl;
            }
        }
        
        return ans;
    }
};
