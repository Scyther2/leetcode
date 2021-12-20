class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int min=INT_MAX;
        
        sort(arr.begin(),arr.end());
        
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]-arr[i-1]<min)
            {
                min=arr[i]-arr[i-1];
            }
        }
        
        vector<vector<int>>ans;
        
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]-arr[i-1]==min)
            {
                ans.push_back(vector<int>{arr[i-1],arr[i]});
            }
        }
        
        return ans;
    }
};
