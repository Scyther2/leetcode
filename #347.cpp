class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans;
        map<int,int>m;
        
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        
        priority_queue<pair<int,int>>q;
        
        for(auto it:m)
        {
            q.push(make_pair(it.second,it.first));
            
        }
        
        while(k--)
        {
            ans.push_back(q.top().second);
            q.pop();
        }
        
        return ans;
        
        
    }
};
