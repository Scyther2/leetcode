class Solution {
public:
    int bitwiseComplement(int n) {
        
         int i=0;
        int ans=0;
        
        if(n==0)
        {
            return 1;
        }
        
        while(n)
        {
            ans+=pow(2,i)*!(n%2);
            n/=2;
            i++;
        }
        
        return ans;
    }
};
