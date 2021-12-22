class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>m;
        
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        
        priority_queue<int,vector<int>,greater<int>>q;
        
        for(auto child:m)
        {
            q.push(child.second);
        }
        
        while(!q.empty() && k)
        {
            k-=q.top();
            if(k<0)
            {
                break;
            }
            q.pop();
        }
        
        return q.size();
        
    }
};
