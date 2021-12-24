class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        
        int n=s1.size();
        int m=s2.size();
        
        int mat[n+1][m+1];
        
        
        
        for(int i=0;i<=n;i++)
        {
            
            for(int j=0;j<=m;j++)
            {
                if(i==0 && j==0)
                {
                    mat[i][j]=0;
                }
                else if(i==0)
                {
                    mat[i][j]=s2[j-1]+mat[i][j-1];
                }
                else if(j==0)
                {
                    mat[i][j]=s1[i-1]+mat[i-1][j];
                }
                else
                {
                    if(s1[i-1]==s2[j-1])
                {
                    mat[i][j]=mat[i-1][j-1];
                }
                else
                {
                    mat[i][j]=min(s1[i-1]+mat[i-1][j],s2[j-1]+mat[i][j-1]);
                }
                }
            }
        }
        
        return mat[n][m];
        
    }
};
