class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        
        int n=pairs.size();
        vector<pair<int,int>>v;
        
        for(int i=0;i<n;i++){
            v.push_back(make_pair(pairs[i][0],pairs[i][1]));
        }
        
        sort(v.begin(),v.end());
        
        int ans=1;
        
        int i=1;
        int prev=v[0].second;
        
        while(i<v.size())
        {
            if(v[i].first>prev)
            {
                if(v[i].second>prev)
                {
                    ans++;
                    prev=v[i].second;
                }
                
            }
            else
            {
                if(v[i].second<prev)
                {
                    prev=v[i].second;
                }
            }
            i++;
        }
        
        return ans;
        
    }
};
