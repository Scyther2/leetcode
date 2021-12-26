class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        
        vector<int>arr(n);
        
        for(int i=1;i<=n;i++)
        {
            arr[i-1]=nums[i%n];
        }
        
        int dp1[n+1];
        int dp2[n+1];
        
        dp1[0]=0;dp2[0]=0;dp1[1]=nums[0];dp2[1]=arr[0];
        
        for(int i=2;i<=n;i++)
        {
            dp1[i]=max(nums[i-1]+dp1[i-2],dp1[i-1]);
            dp2[i]=max(arr[i-1]+dp2[i-2],dp2[i-1]);
        }
        
        // for(int i:arr)
        // {
        //     cout<<i<<" ";
        // }
        // cout<<dp1[n-1]<<" "<<dp2[n-1];
        
        if(n==1)
        {
            return nums[0];
        }
        return max(dp1[n-1],dp2[n-1]);
    }
};
