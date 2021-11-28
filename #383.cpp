class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>m1,m2;
        
        for(int i=0;i<ransomNote.size();i++)
        {
            m1[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.size();i++)
        {
            m2[magazine[i]]++;
        }
        
        for(auto child:m1)
        {
            auto it=m2.find(child.first);
            
            if(it==m2.end() || it->second<child.second)
            {
                return false;
            }
        }
        
        return true;
    }
};
