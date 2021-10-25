class Solution {
public:
    int countBinarySubstrings(string s) {
        vector<int>v;
        
        int l=0,r=0;
        
        while(r<s.size())
        {
            if(s[r]!=s[l])
            {
                v.push_back(r-l);
                l=r;
            }
            r++;
        }
        
        v.push_back(r-l);
        
        
        
        
        
        int ans=0;
        
        for(int i=0;i<v.size()-1;i++)
        {
            ans+=min(v[i],v[i+1]);
        }
        
        return ans;
        
    }
};
