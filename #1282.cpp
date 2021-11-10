class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        map<int,vector<int>>m;
        
        for(int i=0;i<g.size();i++)
        {
            m[g[i]].push_back(i);
        }
        
        vector<vector<int>>ans;
        
        for(auto it:m)
        {
           while(!it.second.empty())
           {
                int x=it.first;
            
            vector<int>temp;
            
            while(x--)
            {
                temp.push_back(it.second.back());
                it.second.pop_back();
            }
            
            ans.push_back(temp);
           }
        }
        
        return ans;
        
    }
};
