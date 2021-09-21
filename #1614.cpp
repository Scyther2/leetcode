class Solution {
public:
    int maxDepth(string s) {
        int n=s.size();
        
        int Max=0;
        int count=0;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                count++;
                Max=max(Max,count);
            }
            else if(s[i]==')')
            {
                count--;
            }
        }
        
        return Max;
    }
};
