class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        
        int l=0,r=0;
        int count=0;
        int ans=0;
        
        while(r<n)
        {
            if(nums[r]==0)
            {
                count++;
            }
            if(count>1)
            {
                while(nums[l]!=0)
                {
                    l++;
                }
                count--;
                l++;
            }
            ans=max(ans,r+1-l);
            r++;
            
            
        }
        
        return ans-1;
    }
};
