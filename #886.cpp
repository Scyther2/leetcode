class Solution {
public:
    vector<int>graph[2001];
    int vis[2001];
    int col[2001];
    bool dfs(int node,int c)
    {
        vis[node]=1;
        col[node]=c;
        for(int child:graph[node])
        {
            if(vis[child]==0)
            {
                if(dfs(child,c^1)==false)
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
    bool possibleBipartition(int n, vector<vector<int>>& d) {
        for(int i=0;i<d.size();i++)
        {   
            graph[d[i][0]].push_back(d[i][1]);
            graph[d[i][1]].push_back(d[i][0]);
        }
        
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
                bool flag=dfs(i,1);
                if(flag==false)
                {
                    return false;
                }
            }
            
            
        }
        
        return true;
        
    }
};
