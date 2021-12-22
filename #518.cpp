class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        
        int mat[n+1][amount+1];
        
        for(int i=0;i<=amount;i++)
        {
            mat[0][i]=0;
        }
        for(int i=0;i<=n;i++)
        {
            mat[i][0]=1;
        }
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=amount;j++)
            {
                if(coins[i-1]<=j)
                {
                    mat[i][j]=mat[i][j-coins[i-1]]+mat[i-1][j];
                }
                else
                {
                    mat[i][j]=mat[i-1][j];
                }
            }
        }
        
        return mat[n][amount];
    }
};
