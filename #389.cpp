class Solution {
public:
    char findTheDifference(string s, string t) {
        
        unordered_map<char,int>m;
        
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        
        for(int i=0;i<t.size();i++)
        {
            auto it=m.find(t[i]);
            if(it!=m.end() && it->second!=0)
            {
                m[t[i]]--;
            }
            else
            {
                return t[i];
            }
        }
        
        return 'a';
    }
};
