class Solution {
public:
    void solve(int index,vector<string>&ans,string &temp,int size,string &s)
    {
        if(index==size)
        {
            ans.push_back(temp);
            return;
        }
        
        if(s[index]>=97 && s[index]<=122)
        {
            temp+=s[index];
            solve(index+1,ans,temp,size,s);
            temp.pop_back();
            
            temp+=s[index]-32;
            solve(index+1,ans,temp,size,s);
            temp.pop_back();
        }
        
        else
        {
            temp+=s[index];
            solve(index+1,ans,temp,size,s);
            temp.pop_back();
        }
    }
    vector<string> letterCasePermutation(string s) {
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                s[i]=s[i]+32;
            }
        }
        
        vector<string>ans;
        
        int n=s.size();
        
        string temp="";
        
        solve(0,ans,temp,n,s);
        
        return ans;
    }
};
