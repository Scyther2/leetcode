class Solution {
public:
    
    int isenough(vector<int>arr,int n)
    {
        int size=arr.size();
        int ans=0;
        for(int i=0;i<size;i++)
        {
            ans+=arr[i]/n;
            if(arr[i]%n!=0)
            {
                ans++;
            }
        }
        return ans;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=*max_element(piles.begin(),piles.end());
        
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(isenough(piles,mid)<=h)
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return l;
    }
};
