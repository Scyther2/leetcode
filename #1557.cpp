class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>graph[n];
        
        
        for(int i=0;i<edges.size();i++)
        {
            int a=edges[i][0];
            int b=edges[i][1];
            
            graph[b].push_back(a);
            
        }
        
        vector<int>ans;
        
        for(int i=0;i<n;i++)
        {
            if(graph[i].size()==0)
            {
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};
