class Solution {
public:
    void solve(vector<vector<int>>&ans,vector<int>&temp,int size,int index,int target,vector<int>&arr)
    {
        if(index==size || target<0)
        {
            return;
        }
        if(target==0)
        {
            ans.push_back(temp);
            return;
        }
        
        temp.push_back(arr[index]);
        solve(ans,temp,size,index,target-arr[index],arr);
        temp.pop_back();
        
        solve(ans,temp,size,index+1,target,arr);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>>ans;
        vector<int>temp;
        
        int n=candidates.size();
        
        solve(ans,temp,n,0,target,candidates);
        
        return ans;
    }
};
