class Solution {
public:
    string mostCommonWord(string s, vector<string>& banned) {
        int n=s.size();
        string s1="";
        map<string,int>m;
        
        for(int i=0;i<n;i++)
        {
            if((s[i]>=65 && s[i]<=90)||(s[i]>=97 && s[i]<=122))
            {
                s1+=s[i];
            }
            else
            {
                if(s1=="")
                {
                    continue;
                }
                else
                {   
                    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
                    m[s1]++;
                    s1="";
                }
            }
        }
        
        if(s1!="")
        {
            transform(s1.begin(),s1.end(),s1.begin(),::tolower);
            m[s1]++;
        }
        
        
        for(int i=0;i<banned.size();i++)
        {
            if(m.find(banned[i])!=m.end())
            {
                m.erase(banned[i]);
            }
        }
        
        int num=0;
        string ans;
        
        for(auto it:m)
        {
            if(it.second>num)
            {
                num=it.second;
                ans=it.first;
            }
        }
        
        return ans;
    }
};
