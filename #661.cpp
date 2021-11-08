class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n=img.size();
        int m=img[0].size();
        vector<vector<int>>ans(n,vector<int>(m));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int count=0;
                int sum=0;
                for(int k=i-1;k<=i+1;k++)
                {
                    for(int t=j-1;t<=j+1;t++)
                    {
                        if(k>=0 && k<n && t>=0 && t<m)
                        {
                            sum+=img[k][t];
                            count++;
                        }
                    }
                }
                ans[i][j]=sum/count;
                
            }
        }
        
        return ans;
        
    }
};
