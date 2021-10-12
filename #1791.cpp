class Solution {
public:
    vector<int>v[100001];
    int findCenter(vector<vector<int>>& edges) {
        
        int n=edges.size();
        
        for(int i=0;i<n;i++)
        {
            v[edges[i][0]].push_back(edges[i][1]);
            v[edges[i][1]].push_back(edges[i][0]);
        }
        
        for(int i=1;i<=n+1;i++)
        {
            if(v[i].size()==n)
            {
                return i;
            }
        }
        
        return 0;
        
    }
};
