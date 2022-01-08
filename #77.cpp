class Solution {
public:
    void solve(int start,int n,int num,vector<int>&temp,vector<vector<int>>&ans)
    {
        if(temp.size()==num)
        {
            ans.push_back(temp);
            return;
        }
        if(start>n)
        {
            return;
        }
        
        temp.push_back(start);
        solve(start+1,n,num,temp,ans);
        temp.pop_back();
        
        solve(start+1,n,num,temp,ans);
        
    }
    vector<vector<int>> combine(int n, int k) {
        
        vector<vector<int>>ans;
        
        vector<int>temp;
        
        solve(1,n,k,temp,ans);
        
        return ans;
    }
};
