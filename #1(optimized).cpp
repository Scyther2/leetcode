class Solution {
public:
    
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>u;
        for(int i=0;i<nums.size();i++)
        {
            int t=target-nums[i];
            if(u.find(t)!=u.end())
            {
                auto it=u.find(t);
                ans.push_back(it->second);
                ans.push_back(i);
                return ans;
            }
            else
            {
                u.insert({nums[i],i});
            }
        }
        return ans;
    }
};
