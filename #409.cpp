class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>m;
        
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        
        int count=0;
        
        for(auto child:m)
        {
            if(child.second%2==0)
            {
                count+=child.second;
            }
            else
            {
                count+=child.second-1;
            }
        }
        
        if(count<s.size())
        {
            count++;
        }
        
        return count;
    }
};
