class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        
        
        int l=0;
        int r=n-1;
        
        while(l<=r)
        {
            if(nums[l]==target)
            {
                return true;
            }
            if(nums[r]==target)
            {
                return true;
            }
            if(nums[l]!=target)
            {
                l++;
            }
            if(nums[r]!=target)
            {
                r--;
            }
        }
        
        
        return false;
        
    }
};
