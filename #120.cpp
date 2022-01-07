class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        int m=triangle[n-1].size();
        
        vector<vector<int>>v(m,vector<int>(m,-1));
        
        v[0][0]=triangle[0][0];
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(j==0)
                {
                    v[i][j]=v[i-1][j]+triangle[i][j];
                }
                else if(j==i)
                {
                    v[i][j]=v[i-1][j-1]+triangle[i][j];
                }
                else
                {
                    v[i][j]=min(v[i-1][j]+triangle[i][j],v[i-1][j-1]+triangle[i][j]);
                }
            }
        }
        
        int ans=INT_MAX;
        
        for(int i=0;i<m;i++)
        {
            
            ans=min(ans,v[n-1][i]);
        }
        
        return ans;
        
    }
};
