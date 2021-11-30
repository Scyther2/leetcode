class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int>m;
        
        for(int i=0;i<sentence.size();i++)
        {
            m[sentence[i]]++;
        }
        
        for(int i=97;i<=122;i++)
        {
            auto it=m.find(char(i));
            if(it==m.end())
            {
                return false;
            }
        }
        
        return true;
        
    }
};
