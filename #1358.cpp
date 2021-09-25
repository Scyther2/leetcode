class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int>v1;
        vector<int>v2;
        vector<int>v3;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a')
            {
                v1.push_back(i);
            }
            else if(s[i]=='b')
            {
                v2.push_back(i);
            }
            else
            {
                v3.push_back(i);
            }
        }
        
        int ans=0;
        
        int i=0,j=0,k=0;
        
        for(int t=0;t<s.size();t++)
        {
            if(s[t]=='a')
            {
                if(j<v2.size() && k<v3.size())
                {
                    ans+=s.size()-max(v3[k],v2[j]);
                }
                i++;
            }
            else if(s[t]=='b')
            {
                if(i<v1.size() && k<v3.size())
                {
                    ans+=s.size()-max(v1[i],v3[k]);
                }
                j++;
            }
            else
            {
                if(i<v1.size() && j<v2.size())
                {
                    ans+=s.size()-max(v1[i],v2[j]);
                }
                k++;
            }
        }
        
        return ans;
    }
};
