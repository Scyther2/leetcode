class Solution {
public:
    int dx[4]={0,0,-1,1};
    int dy[4]={1,-1,0,0};
    int islandPerimeter(vector<vector<int>>& grid) {
        int land=0;
        int side=0;
        int n=grid.size();
        int m=grid[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    for(int k=0;k<4;k++)
                    {
                        int nx=i+dx[k];
                        int ny=j+dy[k];
                        
                        if(nx>=0 && nx<n && ny>=0 && ny<m && grid[nx][ny]==1)
                        {
                            side++;
                        }
                    }
                    land++;
                }
            }
        }
        
        
        
        return 4*land-side;
        
    
        
    }
};
