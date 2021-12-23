class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        
        int mat[n+1][m+1];
        
        
        
        for(int i=0;i<=n;i++)
        {
            mat[i][0]=0;
        }
        
        for(int i=0;i<=m;i++)
        {
            mat[0][i]=0;
        }
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(nums1[i-1]==nums2[j-1])
                {
                    mat[i][j]=1+mat[i-1][j-1];
                }
                else
                {
                    mat[i][j]=0;
                }
            }
        }
        
        int ans=0;
        
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                ans=max(ans,mat[i][j]);
            }
        }
        
        return ans;
        
    }
};
