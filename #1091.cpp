class Solution {
public:
    int dx[8]={-1,-1,-1,0,0,1,1,1};
    int dy[8]={-1,0,1,-1,1,-1,0,1};
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<vector<int>>dis(n,vector<int>(m,-1));
        dis[0][0]=1;
        
        queue<pair<int,int>>q;
        if(grid[0][0]==0)
        {
            q.push({0,0});
        }
        
        while(!q.empty())
        {
            int cx=q.front().first;
            int cy=q.front().second;
            q.pop();
            
            for(int i=0;i<8;i++)
            {
                int nx=cx+dx[i];
                int ny=cy+dy[i];
                
                if(nx>=0 && nx<n && ny>=0 && ny<m && vis[nx][ny]==0 && grid[nx][ny]==0)
                {
                    vis[nx][ny]=1;
                    dis[nx][ny]=dis[cx][cy]+1;
                    q.push({nx,ny});
                }
            }
            
            
            
        }
        
        if(grid[n-1][m-1]==-1)
        {
            return -1;
        }
        
        return dis[n-1][m-1];
        
        
    }
};
