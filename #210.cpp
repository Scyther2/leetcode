class Solution {
public:
    vector<int>graph[2001];
    int vis[2001];
    vector<int>res;
    int in[2001];
    bool kahn(int n)
    {
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(in[i]==0)
                q.push(i);
        }
        
        while(!q.empty())
        {
            int cur=q.front();
            res.push_back(cur);
            q.pop();
            
            for(int child:graph[cur])
            {
                in[child]--;
                if(in[child]==0)
                    q.push(child);
            }
        }
        if(res.size()!=n)
        {
            return false;
        }
        
        return true;
        
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& p) {
        for(int i=0;i<p.size();i++)
        {
            graph[p[i][1]].push_back(p[i][0]);
            in[p[i][0]]++;
        }
        
        bool flag=kahn(numCourses);
        
        if(flag==false)
        {
            res.clear();
        }
        
        return res;
    }
};
