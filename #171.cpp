class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0;
        
        int size=columnTitle.size();
        
        int count=size-1;
        
        int mul=1;
        
        for(int i=1;i<=count;i++)
        {
            mul*=26;
        }
        
        for(int i=0;i<size;i++)
        {
            ans+=(columnTitle[i]-'@')*mul;
            mul/=26;
        }
        
        return ans;
        
    }
};
