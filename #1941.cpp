class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>m;
        
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        
        int a=m.begin()->second;
        
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second!=a)
            {
                return false;
            }
            
        }
        
        return true;
        
        
    }
};
