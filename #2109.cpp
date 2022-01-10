class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        
        string ans="";
        
        int point=0;
        int n=spaces.size();
        int m=s.size();
        
        for(int i=0;i<m;i++)
        {
            if(point<n && spaces[point]==i)
            {
                ans+=' ';
                point++;
            }
            ans+=s[i];
        }
        
        return ans;
    }
};
