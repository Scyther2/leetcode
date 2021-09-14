class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n=s.size();
        
        vector<char>v;
        
        for(int i=n-1;i>=0;i--)
        {
            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
            {
                v.push_back(s[i]);
            }
        }
        
        vector<char>sign(n);
        
        for(int i=0;i<n;i++)
        {
            if(!((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)))
            {
                sign[i]=s[i];
            }
            else
            {
                sign[i]=0;
            }
        }
        
        string ans="";
        int marker=0;
        
        for(int i=0;i<n;i++)
        {
            if(sign[i]!=0)
            {
                ans+=sign[i];
            }
            else
            {
                ans+=v[marker];
                marker++;
            }
        }
        
        return ans;
    }
};
