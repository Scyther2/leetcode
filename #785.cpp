class Solution {
public:
    int vis[100001];
    int col[100001];
    
    bool dfs(int node,int c,vector<vector<int>>& graph)
    {
        vis[node]=1;
        col[node]=c;
        
        for(int child:graph[node])
        {
            if(vis[child]==0)
            {
                if(dfs(child,c^1,graph)==false)
                {
                    return false;
                }
            }
            else
            {
                if(col[node]==col[child])
                {
                    return false;
                }
            }
        }
        
        return true;
        
    }
    bool isBipartite(vector<vector<int>>& graph) {
        
        for(int i=0;i<graph.size();i++)
        {
            if(vis[i]==0 && dfs(i,0,graph)==false)
            {
                return false;
            }
        }
        
        return true;
        
    }
};
