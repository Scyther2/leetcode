class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        
        int arr[n+1];
        
        arr[0]=0;
        
        for(int i=1;i<n+1;i++)
        {
            arr[i]=arr[i-1]+gain[i-1];
        }
        
        int ans=INT_MIN;
        
        for(int i=0;i<n+1;i++)
        {
            if(arr[i]>ans)
            {
                ans=arr[i];
            }
        }
        
        return ans;
    }
};
