class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n=s.size();
        unordered_map<string,int>m;
        set<string>s1;
        vector<string>ans;
        
        int l=0;
        int r=9;
        
        while(r<n)
        {
            if(m.find(s.substr(l,10))!=m.end())
            {
                s1.insert(s.substr(l,10));
            }
            else
            {
                m[s.substr(l,10)]++;
            }
            l++;
            r++;
        }
        
        for(auto it:s1)
        {
            ans.push_back(it);
        }
        
        return ans;
    }
};
