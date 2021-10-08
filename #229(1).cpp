class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        vector<int>ans;
        
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        
        int x=nums.size()/3;
        
        for(auto it:m)
        {
            if(it.second>x)
            {
                ans.push_back(it.first);
            }
        }
        
        return ans;
        
    }
};
