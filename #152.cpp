class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n=nums.size();
        
        int mat1[n],mat2[n];
        
        mat1[0]=nums[0];
        mat2[0]=nums[0];
        
        for(int i=1;i<n;i++)
        {
            if(nums[i]>=0)
            {
                mat1[i]=min(mat1[i-1]*nums[i],nums[i]);
                mat2[i]=max(mat2[i-1]*nums[i],nums[i]);
            }
            else
            {
                mat1[i]=min(mat2[i-1]*nums[i],nums[i]);
                mat2[i]=max(mat1[i-1]*nums[i],nums[i]);
            }
        }
        
        int mx=INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            mx=max(mx,mat2[i]);
        }
        
        return mx;
        
        
        
    }
};
