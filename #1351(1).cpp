class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        
        int ans=0;
        
        for(int i=0;i<m;i++)
        {
            int l=0,r=n-1;
            while(l<=r)
            {
                int mid=(l+r)/2;
                if(grid[i][mid]<0)
                {
                    if(mid==0)
                    {
                        ans+=n;
                        break;
                    }
                    else
                    {
                        if(grid[i][mid-1]<0)
                        {
                            r=mid-1;
                        }
                        else
                        {
                            ans+=n-mid;
                            break;
                        }
                    }
                }
                else
                {
                    l=mid+1;
                }
                
            }
        }
        
        return ans;
    }
};
