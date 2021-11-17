class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string str=s+s;
        
        str.pop_back();
        
        string temp=str.substr(1);
        
        if(temp.find(s)!=-1)
        {
            return true;
        }
        
        return false;
    }
};
