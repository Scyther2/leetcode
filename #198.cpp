class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        
        int mat[n+1];
        
        mat[0]=0;
        
        mat[1]=nums[0];
        
        for(int i=2;i<=n;i++)
        {
            mat[i]=max(nums[i-1]+mat[i-2],mat[i-1]);
        }
        
        return mat[n];
        
    }
};
