class Solution {
    int mod=1000000007;
public:
    int maxProductPath(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        
        long long mat[n+1][m+1];
        long long mat1[n+1][m+1];
        
        
        for(int i=0;i<=n;i++)
        {
            mat[i][0]=1;
            mat1[i][0]=1;
        }
        
        for(int i=0;i<=m;i++)
        {
            mat[0][i]=1;
            mat1[0][i]=1;
        }
        
        mat[1][1]=grid[0][0];
        mat1[1][1]=grid[0][0];
        
        for(int i=2;i<=n;i++)
        {
            mat[i][1]=grid[i-1][0]*mat[i-1][1];
            mat1[i][1]=grid[i-1][0]*mat1[i-1][1];
        }
        
        for(int i=2;i<=m;i++)
        {
            mat[1][i]=grid[0][i-1]*mat[1][i-1];
            mat1[1][i]=grid[0][i-1]*mat1[1][i-1];
        }
        
        for(int i=2;i<=n;i++)
        {
            for(int j=2;j<=m;j++)
            {
                if(grid[i-1][j-1]>=0)
                {
                    mat[i][j]=max(mat[i-1][j],mat[i][j-1])*grid[i-1][j-1];
                    mat1[i][j]=min(mat1[i-1][j],mat1[i][j-1])*grid[i-1][j-1];
                }
                else
                {
                    mat[i][j]=min(mat1[i-1][j],mat1[i][j-1])*grid[i-1][j-1];
                    mat1[i][j]=max(mat[i-1][j],mat[i][j-1])*grid[i-1][j-1];
                }
            }
        }
        
        if(mat[n][m]<0)
        {
            return -1;
        }
        
        return mat[n][m]%mod;
        
    }
};
