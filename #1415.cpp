class Solution {
public:
    void solve(int index,int size,vector<string>&ans,string &temp)
    {
        if(index==size)
        {
            ans.push_back(temp);
            return;
        }
        
        if(index==0)
        {
            temp+='a';
            solve(index+1,size,ans,temp);
            temp.pop_back();
        
            temp+='b';
            solve(index+1,size,ans,temp);
            temp.pop_back();
        
            temp+='c';
            solve(index+1,size,ans,temp);
            temp.pop_back();
        }
        else
        {
            if(temp[index-1]!='a')
            {
                temp+='a';
                solve(index+1,size,ans,temp);
                temp.pop_back();
            }
            if(temp[index-1]!='b')
            {
                temp+='b';
                solve(index+1,size,ans,temp);
                temp.pop_back();
            }
            if(temp[index-1]!='c')
            {
                temp+='c';
                solve(index+1,size,ans,temp);
                temp.pop_back();
            }
        }
    }
    string getHappyString(int n, int k) {
        
        vector<string>ans;
        string temp="";
        
        solve(0,n,ans,temp);
        
        sort(ans.begin(),ans.end());
        
        if(k>ans.size())
        {
            return "";
        }
        
        // for(auto child:ans)
        // {
        //     cout<<child<<" ";
        // }
        return ans[k-1];
        
    }
};
