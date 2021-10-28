class Solution {
public:
    
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<pair<int,int>>v;
        
        for(int i=0;i<trips.size();i++){
            v.push_back({trips[i][1],trips[i][0]});
            v.push_back({trips[i][2],-trips[i][0]});
        }
        
        sort(v.begin(),v.end());
        
        int pas=0;
        
        for(int i=0;i<v.size();i++)
        {
            if(pas+v[i].second>capacity)
            {
                return false;
            }
            pas+=v[i].second;
        }
        
        return true;
    }
};
