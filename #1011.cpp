class Solution {
public:
    
    int myans(vector<int>&v,int mid)
    {
        int size=v.size();
        
        int sum=0;
        int ans=1;
        
        int i=0;
        
        while(i<size)
        {
            if(sum+v[i]<=mid)
            {
                sum+=v[i];
                i++;
            }
            else
            {
                ans++;
                sum=0;
            }
        }
        
        
        return ans;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int sum=0;
        int MAX=0;
        
        for(int i=0;i<n;i++)
        {
            sum+=weights[i];
            if(weights[i]>MAX)
            {
                MAX=weights[i];
            }
        }
        
        int fn=1;
        
        int l=max(sum/days,MAX);
        int r=sum;
        
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(myans(weights,mid)<=days)
            {
                fn=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        
        return fn;
    }
};
