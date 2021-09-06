class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        
        vector<pair<int,int>>p;
        
        for(int i=0;i<intervals.size();i++)
        {
            p.push_back(make_pair(intervals[i][0],intervals[i][1]));
            
        }
        
        sort(p.begin(),p.end());
        
        int s=p[0].first,e=p[0].second;
        
        for(int i=1;i<p.size();i++)
        {
            if(e>=p[i].first)
            {
                if(e<p[i].second)
                {
                    e=p[i].second;
                }
                else
                {
                    continue;
                }
            }
            else
            {
                ans.push_back((vector<int>){s,e});
                s=p[i].first;
                e=p[i].second;
            }
        }
        ans.push_back((vector<int>){s,e});
        
        return ans;
        
        
    }
};
