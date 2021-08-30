class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        if(n==1)
        {
            
            return;
        }
        char t=s[0];
        s.erase(s.begin());
        reverseString(s);
        s.push_back(t);
        
        
        
        
    }
};
