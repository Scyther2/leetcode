class Solution {
public:
    int longestPalindromeSubseq(string s1) {
        
        string s2="";
        
        int n=s1.size();
        
        for(int i=n-1;i>=0;i--)
        {
            s2+=s1[i];
        }
        
        int mat[n+1][n+1];
        
        for(int i=0;i<=n;i++)
        {
            mat[i][0]=0;
            mat[0][i]=0;
        }
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(s1[i-1]==s2[j-1])
                {
                    mat[i][j]=1+mat[i-1][j-1];
                }
                else
                {
                    mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
                }
            }
        }
        
        return mat[n][n];
    }
};
