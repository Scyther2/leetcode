class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
       int n=nums.size();
        
        int k=1;
        int ans=INT_MIN;
        
        for(int i=1;i<n;i++)
        {
            if(nums[i]>nums[i-1])
            {
                k++;
            }
            else
            {
                ans=max(ans,k);
                k=1;
                
            }
        }
        
        ans=max(ans,k);
        
        return ans;
    }
};
