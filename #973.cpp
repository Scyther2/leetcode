class Solution {
    struct compare {
        bool operator()(const vector<int>& p, const vector<int>& q) const {
            return p[0]>q[0] ;
        }
    };
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<vector<int>,vector<vector<int>>,compare>q;
        
        int n=points.size();
        
        for(int i=0;i<n;i++)
        {
            int a=points[i][0];
            int b=points[i][1];
            
            int dis=a*a+b*b;
            
            q.push((vector<int>){dis,a,b});
            
            
        }
        
        vector<vector<int>>ans;
        
        while(k-- && !q.empty())
        {
            ans.push_back((vector<int>){q.top()[1],q.top()[2]});
            q.pop();
        }
        
        return ans;
    }
};
