class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& v) {
        int n=v.size();
        
        int arr[n];
        
        for(int i=0;i<n;i++)
        {
            arr[i]=v[i][0];
        }
        
        sort(arr,arr+n);
        
        int max=INT_MIN;
        
        for(int i=1;i<n;i++)
        {
            if(arr[i]-arr[i-1]>max)
            {
                max=arr[i]-arr[i-1];
            }
        }
        
        return max;
        
    }
};
