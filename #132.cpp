class Solution {
    int mat[2001][2001];
public:
    bool ispalindrome(string &s,int i,int j)
    {
        
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        
        return true;
    }
    int solve(string &s,int i,int j)
    {
        if(i>=j)
        {
            return 0;
        }
        if(ispalindrome(s,i,j)==true)
        {
            return 0;
        }
        if(mat[i][j]!=-1)
        {
            return mat[i][j];
        }
        
        int mn=INT_MAX;
        for(int k=i;k<=j-1;k++)
        {
            int left,right;
            // if(mat[i][k]!=-1)
            // {
            //     left=mat[i][k];
            // }
            // else
            // {
            //     left=solve(s,i,k);
            //     mat[i][k]=left;
            // }
            // if(mat[k+1][j]!=-1)
            // {
            //     right=mat[k+1][j];
            // }
            // else
            // {
            //     right=solve(s,k+1,j);
            //     mat[k+1][j]=right;
            // }
            if(ispalindrome(s,i,k)==true)
            {
                if(mat[k+1][j]!=-1)
            {
                right=mat[k+1][j];
            }
            else
            {
                right=solve(s,k+1,j);
                mat[k+1][j]=right;
            }
                int temp=1+right;
                 mn=min(mn,temp);
            }
            
        }
        
        return mat[i][j]=mn;
    }
    int minCut(string s) {
        memset(mat,-1,sizeof(mat));
        
        int i=0,j=s.size()-1;
        
        int ans=solve(s,i,j);
        
        return ans;
    }
};
