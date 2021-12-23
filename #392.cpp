class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int m=t.size();
        
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
                if(s[i-1]==t[j-1])
                {
                    mat[i][j]=1+mat[i-1][j-1];
                }
                else
                {
                    mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
                }
            }
        }
        
        if(mat[n][m]==n)
        {
            return true;
        }
        
        return false;
        
    }
};
