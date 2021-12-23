class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        int n=coins.size();
        
        int mat[n+1][amount+1];
        
        int num=INT_MAX-1;
        
        for(int i=0;i<=amount;i++)
        {
            mat[0][i]=num;
        }
        
        for(int i=1;i<=n;i++)
        {
            mat[i][0]=0;
        }
        
        for(int i=1;i<=amount;i++)
        {
            if(i%coins[0]==0)
            {
                mat[1][i]=i/coins[0];
            }
            else
            {
                mat[1][i]=num;
            }
        }
        
        for(int i=2;i<=n;i++)
        {
            for(int j=1;j<=amount;j++)
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
        
        
        if(mat[n][amount]==INT_MAX-1)
        {
            return -1;
        }
        
        return mat[n][amount];
        
        
    }
};
