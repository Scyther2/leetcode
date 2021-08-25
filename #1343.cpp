class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        
        int ans=0;
        
        int i=0,j=k;
        int avg=0;
        int sum[n+1];
        
        sum[0]=0;
        
        for(int t=1;t<n+1;t++)
        {
            sum[t]=arr[t-1]+sum[t-1];
        }
        
        while(j<=n)
        {
            avg=(sum[j]-sum[i])/k;
            
            if(avg>=threshold)
            {
                ans++;
            }
            i++;
            j++;
        }
        
        
        
        
        return ans;
    }
};
