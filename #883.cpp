class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int ans=0;
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                    if(grid[i][j])
                    {
                        ans++;
                    }
            }
        }
        
        
        for(int i=0;i<grid[0].size();i++)
        {
            int temp=0;
            for(int j=0;j<grid.size();j++)
            {
                if(grid[j][i]>temp)
                {
                    temp=grid[j][i];
                }
            }
            ans+=temp;
        }
        
        
        
        for(int i=0;i<grid.size();i++)
        {
            sort(grid[i].begin(),grid[i].end());
        }
        
        for(int i=0;i<grid.size();i++)
        {
            ans+=grid[i][grid[0].size()-1];
        }
        
        
        
        return ans;
        
    }
};
