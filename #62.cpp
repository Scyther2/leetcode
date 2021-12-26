class Solution {
    
public:
    
    int uniquePaths(int m, int n) {
        int mat[m+1][n+1];
        
        for(int i=0;i<=m;i++)
        {
            mat[i][0]=0;
        }
        
        for(int i=0;i<=n;i++)
        {
            mat[0][i]=0;
        }
        
        for(int i=1;i<=m;i++)
        {
            mat[i][1]=1;
        }
        
        for(int i=1;i<=n;i++)
        {
            mat[1][i]=1;
        }
        
        for(int i=2;i<=m;i++)
        {
            for(int j=2;j<=n;j++)
            {
                mat[i][j]=mat[i-1][j]+mat[i][j-1];
            }
        }
        
        
        
        return mat[m][n];
        
    }
};
