class Solution {
public:
    int hammingDistance(int x, int y) {
        int a=x^y;
        
        int ans=0;
        
        while(a)
        {
            ans+=a&1;
            a>>=1;
        }
        
        return ans;
    }
};
