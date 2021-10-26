class Solution {
public:
    vector<int>graph[100001];
    int vis[100001];
    int in[100001];
    vector<int>res;
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
            int c=q.front();
            res.push_back(c);
            q.pop();
            for(int child:graph[c])
            {
                in[child]--;
                if(in[child]==0)
                    q.push(child);
            }
        }
        
        if(res.size()!=n)
            return false;
        
        return true;
    }
    bool canFinish(int numCourses, vector<vector<int>>& p) {
        
        for(int i=0;i<p.size();i++)
        {
            int a=p[i][0];
            int b=p[i][1];
            
            graph[a].push_back(b);
            in[b]++;
        }
        
        bool flag=kahn(numCourses);
        
        
        
        
        return flag;
    }
};
