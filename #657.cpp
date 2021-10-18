class Solution {
public:
    bool judgeCircle(string s) {
        int sum1=0,sum2=0;
        
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='R')
            {
                sum1++;
                
            }
            else if(s[i]=='L')
            {
                sum1--;
                
            }
            else if(s[i]=='U')
            {
                sum2++;
                
            }
            else
            {
                sum2--;
                
            }
        }
        
        
        
        if(sum1==0  && sum2==0)
        {
            return true;
        }
        
        return false;
    }
};
