class Solution {
public:
    int sumBase(int n, int k) {
        int num=0;
        
        while(n>0)
        {
            num=10*num+(n%k);
            n/=k;
        }
        
        
        int ans=0;
        
        while(num>0)
        {
            ans+=num%10;
            num/=10;
        }
        
        return ans;
    }
};
