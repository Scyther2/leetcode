class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,vector<int>>m;
        
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(nums[i])!=m.end())
            {
                auto it=m.find(nums[i]);
                if(abs(it->second[it->second.size()-1]-i)<=k)
                {
                    return true;
                }
                else
                {
                    m[nums[i]].push_back(i);
                }
            }
            else
            {
                m[nums[i]].push_back(i);
            }
        }
        
        return false;
        
        
    }
};
