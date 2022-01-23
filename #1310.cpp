class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        
        vector<int>prefix;
        
        prefix.push_back(arr[0]);
        
        for(int i=1;i<arr.size();i++)
        {
            prefix.push_back(arr[i]^prefix[i-1]);
        }
        
        vector<int>ans(queries.size());
        
        for(int i=0;i<queries.size();i++)
        {
            if(queries[i][0]==0)
            {
                ans[i]=prefix[queries[i][1]];
            }
            else
            {
                ans[i]=prefix[queries[i][1]]^prefix[queries[i][0]-1];
            }
        }
        
        return ans;
    }
};
