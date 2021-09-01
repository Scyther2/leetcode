class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        
        int sum[n];
        sum[0]=nums[0];
        
        for(int i=1;i<n;i++)
        {
            sum[i]=sum[i-1]+nums[i];
        }
        
        vector<int>ans(n);
        int t=0;
        for(int i=1;i<n;i++)
        {
            t+=abs(nums[i]-nums[0]);
        }
        ans[0]=t;
        
        for(int i=1;i<n;i++)
        {
            int x=(nums[i]*i)-(sum[i-1])+(sum[n-1]-sum[i])-(nums[i]*(n-i-1));
            ans[i]=x;
        }
        
        return ans;
    }
};
