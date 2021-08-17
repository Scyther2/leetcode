class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        
        int a=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int b=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        
        if(a==b)
        {
            return (vector<int>){-1,-1};
        }
        
        return (vector<int>){a,b-1};
        
        }
};
