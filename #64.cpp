class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        
        int mat[n][m];
        
        mat[0][0]=grid[0][0];
        
        for(int i=1;i<n;i++)
        {
            mat[i][0]=grid[i][0]+mat[i-1][0];
        }
        
        for(int i=1;i<m;i++)
        {
            mat[0][i]=grid[0][i]+mat[0][i-1];
        }
        
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                mat[i][j]=min(grid[i][j]+mat[i-1][j],grid[i][j]+mat[i][j-1]);
            }
        }
        
        return mat[n-1][m-1];
        
    }
};
