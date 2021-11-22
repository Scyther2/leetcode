class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int>m;
        
        for(int i=0;i<allowed.size();i++)
        {
            m[allowed[i]]++;
        }
        
        int count=0;
        
        for(int i=0;i<words.size();i++)
        {
            for(int j=0;j<words[i].size();j++)
            {
                bool flag=0;
                if(m.find(words[i][j])==m.end())
                {
                    flag=1;
                }
                if(flag)
                {
                    count++;
                    break;
                }
                
            }
            
            
            
        }
        
        return words.size()-count;
    }
};
