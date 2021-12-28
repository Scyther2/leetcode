class Solution {
public:
    int numSquares(int n) {
        
        vector<int>coins;
        
        for(int i=1;i*i<=n;i++)
        {
            coins.push_back(i*i);
        }
        
        int size=coins.size();
        
        int mat[size+1][n+1];
        
        int inf=INT_MAX-1;
        
        for(int i=0;i<=n;i++)
        {
            mat[0][i]=inf;
        }
        
        for(int i=1;i<=size;i++)
        {
            mat[i][0]=0;
        }
        
        for(int i=1;i<=n;i++)
        {
            if(i%coins[0]==0)
            {
                mat[1][i]=i/coins[0];
            }
            else
            {
                mat[1][i]=inf;
            }
        }
        
        for(int i=2;i<=size;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(coins[i-1]<=j)
                {
                    mat[i][j]=min(1+mat[i][j-coins[i-1]],mat[i-1][j]);
                }
                else
                {
                    mat[i][j]=mat[i-1][j];
                }
            }
        }
        
        return mat[size][n];
        
    }
};
