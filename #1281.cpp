class Solution {
public:
    int subtractProductAndSum(int n) {
        long long int pro=1;
        long long int sum=0;
        
        while(n>0)
        {
            int x=n%10;
            sum+=x;
            pro*=x;
            n/=10;
        }
        
        return pro-sum;
        
    }
};
