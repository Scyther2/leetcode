class Solution {
public:
    int mySqrt(int x) {
        long long int l=0;
        long long int h=x;
        int ans=0;
        
        while(l<=h)
        {
            long long int mid=(l+h)/2;
            
            if((mid*mid)>x)
            {
                h=mid-1;
            }
            else if((mid*mid)==x)
            {
                return (int)mid;
            }
            else 
            {
                if((mid+1)*(mid+1)>x)
                {
                    ans=(int)mid;
                    return ans;
                }
                else
                {
                    l=mid+1;
                }
            }
        }
        
        return ans;
    }
};
