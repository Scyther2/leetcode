class Solution {
public:
    int vis[200001];
    vector<int>graph[200001];
    void dfs(int node,vector<int>graph[])
    {
        vis[node]=1;
        for(int child:graph[node])
        {
            if(vis[child]==0)
            {
                dfs(child,graph);
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        
        for(int i=0;i<edges.size();i++)
        {
            int a=edges[i][0];
            int b=edges[i][1];
            
            graph[a].push_back(b);
             graph[b].push_back(a);
            
        }
        
        dfs(start,graph);
        
        
        
        if(vis[end]==0)
        {
            return false;
        }
        
        return true;
        
    }
};
