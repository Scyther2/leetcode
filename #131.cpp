class Solution {
public:
    bool ispalin(string &s)
    {
        int left=0;
        int right=s.size()-1;
        
        while(left<right)
        {
            if(s[left]!=s[right])
            {
                return false;
            }
            left++;
            right--;
            
        }
        return true;
    }
    void solve(string &s,vector<string>&temp,vector<vector<string>>&ans)
    {
        if(s.size()==0)
        {
            ans.push_back(temp);
            return;
        }
        
        for(int i=0;i<s.size();i++)
        {
            string cur=s.substr(0,i+1);
            if(ispalin(cur)==true)
            {
                temp.push_back(cur);
                string nxt=s.substr(i+1);
                solve(nxt,temp,ans);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        
        vector<string>temp;
        vector<vector<string>>ans;
        
        solve(s,temp,ans);
        
        return ans;
    }
};
