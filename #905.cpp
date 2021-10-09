class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        
        while(l<r)
        {
            while(nums[l]%2==0 && l<r)
            {
                l++;
            }
            while(nums[r]%2==1 && l<r)
            {
                r--;
            }
            if(l<r)
            {
                swap(nums[l],nums[r]);
                l++;
                r--;
            }
        }
        
        return nums;
    }
};
