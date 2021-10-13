class Solution {
    
public:
    void dfs(int i,int j,vector<vector<char>>& arr)
    {
        if(i<0 || i==arr.size() || j<0 || j==arr[0].size() || arr[i][j]=='0')
        {
            return;
        }
        arr[i][j]='0';
        dfs(i-1,j,arr);
        dfs(i+1,j,arr);
        dfs(i,j-1,arr);
        dfs(i,j+1,arr);
    }
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    count++;
                    dfs(i,j,grid);
                }
            }
        }
        
        return count;
    }
};
