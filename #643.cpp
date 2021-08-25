class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans=INT_MIN;
        int n=nums.size();
        
        int sum[n+1];
        sum[0]=0;
        
        for(int t=1;t<n+1;t++)
        {
            sum[t]=nums[t-1]+sum[t-1];
        }
        
        int i=0,j=k;
        double avg=0;
        
        while(j<=n)
        {
            avg=(double)(sum[j]-sum[i])/k;
            if(avg>ans)
            {
                ans=avg;
            }
            i++;
            j++;
        }
        
        return ans;
    }
};
