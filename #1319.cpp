class Solution {
public:
    vector<int>arr[100001];
    int vis[100001];
    void dfs(int node)
    {
        vis[node]=1;
        
        for(int child:arr[node])
        {
            if(vis[child]==0)
            {
                dfs(child);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& c) {
        
        int count=0;
        for(int i=0;i<c.size();i++)
        {
            count++;
            arr[c[i][0]].push_back(c[i][1]);
            arr[c[i][1]].push_back(c[i][0]);
        }
        
        int cc=0;
        
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                cc++;
                dfs(i);
            }
        }
        
        if(count<n-1)
        {
            return -1;
        }
        
        return cc-1;
        
    }
};
