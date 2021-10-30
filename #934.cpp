class Solution {
public:
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    void dfs(int i,int j,vector<vector<int>>&grid,vector<vector<int>>&vis)
    {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]!=1 || vis[i][j]==1)
        {
            return;
        }
        vis[i][j]=1;
        grid[i][j]=2;
        dfs(i+1,j,grid,vis);
        dfs(i-1,j,grid,vis);
        dfs(i,j+1,grid,vis);
        dfs(i,j-1,grid,vis);
    }
    int shortestBridge(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        bool flag=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    dfs(i,j,grid,vis);
                    flag=1;
                    break;
                }
                
            }
            if(flag)
            {
                break;
            }
        }
        
        vector<vector<int>>dis(n,vector<int>(m));
        
        queue<pair<int,int>>q;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                    dis[i][j]=0;
                }
            }
        }
        
        while(!q.empty())
        {
            int cx=q.front().first;
            int cy=q.front().second;
            q.pop();
            
            for(int i=0;i<4;i++)
            {
                int nx=cx+dx[i];
                int ny=cy+dy[i];
                
                if(nx>=0 && nx<n && ny>=0 && ny<m && vis[nx][ny]==0)
                {
                    if(grid[nx][ny]==1)
                    {
                        return dis[cx][cy];
                    }
                    vis[nx][ny]=1;
                    dis[nx][ny]=dis[cx][cy]+1;
                    q.push({nx,ny});
                }
            }
            
        }
        
        return 0;
        
    }
};
