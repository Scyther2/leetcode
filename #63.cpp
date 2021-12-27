class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& o) {
        int m=o.size();
        int n=o[0].size();
        
        int mat[m+1][n+1];
        
        
        
        for(int i=0;i<=m;i++)
        {
            mat[i][0]=0;
        }
        
        for(int i=0;i<=n;i++)
        {
            mat[0][i]=0;
        }
        
        if(o[0][0]==1)
        {
            mat[1][1]=0;
        }
        else
        {
            mat[1][1]=1;
        }
        
        for(int i=2;i<=m;i++)
        {
            if(o[i-1][0]==1)
            {
                mat[i][1]=0;
            }
            else
            {
                mat[i][1]=mat[i-1][1]+mat[i][0];
            }
        }
        
        for(int i=2;i<=n;i++)
        {
            if(o[0][i-1]==1)
            {
                mat[1][i]=0;
            }
            else
            {
                mat[1][i]=mat[1][i-1]+mat[0][i];
            }
        }
        
        
        for(int i=2;i<=m;i++)
        {
            for(int j=2;j<=n;j++)
            {
                if(o[i-1][j-1]==0)
                {
                    mat[i][j]=mat[i-1][j]+mat[i][j-1];
                }
                else
                {
                    mat[i][j]=0;
                }
            }
        }
        
        
        
        return mat[m][n];
    }
};
