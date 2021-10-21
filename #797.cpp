class Solution {
public:
    vector<vector<int>>ans;
    vector<int>temp;
    
    void dfs(vector<vector<int>>& graph,int fin,int cur)
    {
        temp.push_back(cur);
        
        if(cur==fin)
        {
            ans.push_back(temp);
            
        }
        
        for(int child:graph[cur])
        {
            dfs(graph,fin,child);
        }
        
        temp.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int fin=graph.size()-1;
        
        dfs(graph,fin,0);
        
        return ans;
        
    }
};
