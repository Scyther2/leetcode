class Solution {
public:
    void dfs1(int i,int j,vector<vector<char>>& board,vector<vector<int>>& vis)
    {
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j]=='X' || vis[i][j]==1)
        {
            return;
        }
        vis[i][j]=1;
        dfs1(i-1,j,board,vis);
        dfs1(i+1,j,board,vis);
        dfs1(i,j-1,board,vis);
        dfs1(i,j+1,board,vis);
    }
    void dfs2(int i,int j,vector<vector<char>>& board,vector<vector<int>>& vis)
    {
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j]=='X')
        {
            return;
        }
        board[i][j]='X';
        vis[i][j]=1;
        dfs2(i-1,j,board,vis);
        dfs2(i+1,j,board,vis);
        dfs2(i,j-1,board,vis);
        dfs2(i,j+1,board,vis);
    }
    
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        
        vector<vector<int>> vis( n , vector<int> (m,0));
        
        for(int i=0;i<m;i++)
        {
            
            if(vis[0][i]==0)
            {
                dfs1(0,i,board,vis);
            }
            if(vis[n-1][i]==0)
            {
                dfs1(n-1,i,board,vis);
            }
            
        }
        
        for(int i=0;i<n;i++)
        {
            if(vis[i][0]==0)
            {
                dfs1(i,0,board,vis);
            }
            if(vis[i][m-1]==0)
            {
                dfs1(i,m-1,board,vis);
            }
        }
        
        
        for(int i=1;i<n-1;i++)
        {
            for(int j=1;j<m-1;j++)
            {
                if(vis[i][j]==0)
                {
                    
                    dfs2(i,j,board,vis);
                }
            }
        }
        
        
        
    }
};
