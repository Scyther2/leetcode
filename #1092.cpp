class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int n=str1.size();
        int m=str2.size();
        
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
                if(str1[i-1]==str2[j-1])
                {
                    mat[i][j]=1+mat[i-1][j-1];
                }
                else
                {
                    mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
                }
            }
        }
        
        string ans="";
        
        int i=n,j=m;
        
        while(i>0 && j>0)
        {
            if(str1[i-1]==str2[j-1])
            {
                ans.push_back(str1[i-1]);
                i--;
                j--;
            }
            else
            {
                if(mat[i][j-1]>mat[i-1][j])
                {
                    ans.push_back(str2[j-1]);
                    j--;
                }
                else
                {
                    ans.push_back(str1[i-1]);
                    i--;
                }
            }
            
        }
        
        while(i>0){
		ans.push_back(str1[i-1]);
		i--;
	}
	
	while(j>0){
		ans.push_back(str2[j-1]);
		j--;
	}
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};
