class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int>rows;
        vector<int>colms;
        
        for(int i=0;i<grid.size();i++)
        {
            int temp=0;
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]>temp)
                {
                    temp=grid[i][j];
                }
            }
            rows.push_back(temp);
        }
        
        for(int i=0;i<grid.size();i++)
        {
            int temp=0;
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[j][i]>temp)
                {
                    temp=grid[j][i];
                }
            }
            colms.push_back(temp);
        }
        
        int ans=0;
        
        
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                int n=min(rows[i],colms[j]);
                
                
                
                if(n>grid[i][j])
                {
                    ans+=n-grid[i][j];
                }
                
                
            }
        }
        
        return ans;
    }
};
