class Solution {
public:
    int vis[1000];
    void dfs(int node,vector<vector<int>>& rooms)
    {
        vis[node]=1;
        for(int child:rooms[node])
        {
            if(vis[child]==0)
            {
                dfs(child,rooms);
            }
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        
        int count=0;
        
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                count++;
                dfs(i,rooms);
            }
        }
        
        if(count==1)
        {
            return true;
        }
        
        
        return false;
        
    }
};
