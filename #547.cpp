class Solution {
public:
    int vis[100001];
    vector<int>graph[100001];
    
    void dfs(int node)
    {
        vis[node]=1;
        for(int child:graph[node])
        {
            if(vis[child]==0)
            {
                dfs(child);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& m) {
        vector<vector<int>>edges;
        
        for(int i=0;i<m.size();i++)
        {
            for(int j=0;j<m.size();j++)
            {
                if(m[i][j]==1 && i!=j)
                {
                    edges.push_back(vector<int>{i+1,j+1});
                }
            }
        }
        
        
        
        for(int i=0;i<edges.size();i++)
        {
            int a=edges[i][0];
            int b=edges[i][1];
            
            graph[a].push_back(b);
        }
        
        int count=0;
        
        for(int i=1;i<=m.size();i++)
        {
            if(vis[i]==0)
            {
                dfs(i);
                count++;
            }
        }
        
        return count;
        
    }
};
