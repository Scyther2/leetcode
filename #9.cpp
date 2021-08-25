class Solution {
public:
    bool isPalindrome(int x) {
        string s;
        
        s=to_string(x);
        
        int n=s.size();
        
        if(x<0)
        {
            return false;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(s[i]!=s[n-1-i])
                {
                    return false;
                }
            }
        }
        return true;
    }
};
