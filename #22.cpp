class Solution {
public:
    void solve(int open,int close,int total,vector<string>&ans,string &temp)
    {
        if(open==total && close==total)
        {
            ans.push_back(temp);
            return;
        }
        
        if(open<total)
        {
            temp+='(';
            solve(open+1,close,total,ans,temp);
            temp.pop_back();
        }
        
        if(close<total && close<open)
        {
            temp+=')';
            solve(open,close+1,total,ans,temp);
            temp.pop_back();
        }
            
        
        
    }
    vector<string> generateParenthesis(int n) {
        
        vector<string>ans;
        string temp="";
        solve(0,0,n,ans,temp);
        
        return ans;
    }
};
