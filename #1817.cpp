class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        
        unordered_map<int,set<int>>m;
        
        for(int i=0;i<logs.size();i++)
        {
            m[logs[i][0]].insert(logs[i][1]);
        }
        
        vector<int>ans(k);
        
        for(int i=0;i<k;i++)
        {
            ans[i]=0;
        }
        
        for(auto child:m)
        {
            ans[child.second.size()-1]++;
        }
        
        return ans;
    }
};
