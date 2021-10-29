class Solution {
public:
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int n=grid.size();
        int m=grid[0].size();
        
        int fresh=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                }
                if(grid[i][j]==1)
                {
                    fresh++;
                }
                
            }
        }
        
        int count=-1;
        
        while(!q.empty())
        {
            int x=q.size();
            
            while(x--)
            {
                int cx=q.front().first;
                int cy=q.front().second;
                q.pop();
                
                for(int i=0;i<4;i++)
                {
                    int nx=cx+dx[i];
                    int ny=cy+dy[i];
                    
                    if(!(nx<0 || nx>=n || ny<0 || ny>=m || grid[nx][ny]==0 || grid[nx][ny]==2))
                    {
                        q.push({nx,ny});
                        grid[nx][ny]=2;
                        fresh--;
                    }
                }
                
            }
            count++;
        }
        
        if(fresh>0)
        {
            return -1;
        }
        if(count==-1) return 0;
        return count;
        
        
        
    }
};
