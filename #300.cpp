class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        
        int mat[n+1];
        
        mat[0]=0;
        
        for(int i=1;i<=n;i++)
        {
            mat[i]=1;
        }
        
        for(int i=2;i<=n;i++)
        {
            for(int j=1;j<i;j++)
            {
                if(nums[i-1]>nums[j-1])
                {
                    mat[i]=max(mat[j]+1,mat[i]);
                }
            }
        }
        
        int mx=INT_MIN;
        
        for(int i=0;i<=n;i++)
        {
            mx=max(mx,mat[i]);
        }
        
        return mx;
    }
};
