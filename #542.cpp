class Solution {
public:
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        
        vector<vector<int>>ans(n,vector<int>(m));
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        queue<pair<int,int>>q;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    vis[i][j]=1;
                    ans[i][j]=0;
                    q.push({i,j});
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
                    ans[nx][ny]=ans[cx][cy]+1;
                    vis[nx][ny]=1;
                    q.push({nx,ny});
                }
            }
        }
        
        
        
        
        return ans;
    }
};
