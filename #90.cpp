class Solution {
public:
    void solve(int index,int size,vector<int>&temp,set<vector<int>>&st,vector<int>&nums)
    {
        if(index==size)
        {
            st.insert(temp);
            return;
        }
        
        temp.push_back(nums[index]);
        solve(index+1,size,temp,st,nums);
        temp.pop_back();
        
        solve(index+1,size,temp,st,nums);
        
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>temp;
        set<vector<int>>st;
        
        solve(0,n,temp,st,nums);
        
        for(auto child:st)
        {
            ans.push_back(child);
        }
        
        return ans;
    }
};
