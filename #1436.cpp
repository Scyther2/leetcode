class Solution {
public:
    string destCity(vector<vector<string>>& path) {
        set<string>city;
        unordered_set<string>des;
        
        for(int i=0;i<path.size();i++)
        {
            city.insert(path[i][0]);
            city.insert(path[i][1]);
            des.insert(path[i][0]);
        }
        
        string ans;
        for(string child:city)
        {
            auto it=des.find(child);
            if(it==des.end())
            {
                ans=child;
            }
        }
        
        return ans;
    }
};
