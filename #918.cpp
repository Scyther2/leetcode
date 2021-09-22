class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int ans=INT_MIN,cur=0;
        
        for(int i=0;i<nums.size();i++)
        {
            cur=cur+nums[i];
            if(cur>ans)
            {
                ans=cur;
            }
            if(cur<0)
            {
                cur=0;
            }
        }
        
        int temp=INT_MAX;
        cur=0;
        for(int i=0;i<nums.size();i++)
        {
            cur=cur+nums[i];
            if(cur<temp)
            {
                temp=cur;
            }
            if(cur>0)
            {
                cur=0;
            }
        }
        
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        
        if(ans<0)
        {
            return ans;
        }
        return max(ans,sum-temp);
    }
};
