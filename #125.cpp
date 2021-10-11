class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";
        
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>=48 && s[i]<=57)||(s[i]>=65 && s[i]<=90)||(s[i]>=97 && s[i]<=122))
            {
                s1+=tolower(s[i]);
            }
        }
        
        int n=s1.size();
        for(int i=0;i<s1.size()/2;i++)
        {
            if(s1[i]!=s1[n-i-1])
            {
                return false;
            }
        }
        
        return true;
    }
};
