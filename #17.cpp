class Solution {
    
public:
    unordered_map<char,string>m;
    void solve(int index,string &s, vector<string>&ans,string &temp,int n)
    {
        if(index==n)
        {
            ans.push_back(temp);
            return;
        }
        
        
            string child=m[s[index]];
            
            for(int j=0;j<child.size();j++)
            {
                temp+=child[j];
                solve(index+1,s,ans,temp,n);
                temp.pop_back();
            }
        
    }
    vector<string> letterCombinations(string digits) {
        
        
        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mno";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";
        
        vector<string>ans;
        
        string temp="";
        int n=digits.size();
        
        if(n==0)
        {
            return ans;
        }
        
        solve(0,digits,ans,temp,n);
        
        return ans;
        
    }
};
