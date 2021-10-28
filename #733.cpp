class Solution {
public:
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    
    
    bool isvalid(int x,int y,vector<vector<int>>&v,vector<vector<int>>&vis,int col)
    {
        if(x<0 || x>=v.size() || y<0 || y>=v[0].size() || v[x][y]!=col || vis[x][y]==1)
        {
            return false;
        }
        return true;
    }
    void bfs(int x,int y,vector<vector<int>>& v,vector<vector<int>>&vis,int col,int newcol)
    {
        queue<pair<int,int>>q;
        q.push({x,y});
        vis[x][y]=1;
        v[x][y]=newcol;
        
        while(!q.empty())
        {
            int cx=q.front().first;
            int cy=q.front().second;
            q.pop();
            
            for(int i=0;i<4;i++)
            {
                int nx=cx+dx[i];
                int ny=cy+dy[i];
                
                if(isvalid(nx,ny,v,vis,col))
                {
                    v[nx][ny]=newcol;
                    q.push({nx,ny});
                    vis[nx][ny]=1;
                }
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        bfs(sr,sc,image,vis,image[sr][sc],newColor);
        
        return image;
    }
};
