class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int bs=prices[0]*-1;
        int ss=0;
        int cs=0;
        
        int n=prices.size();
        
        for(int i=1;i<n;i++)
        {
            int tbs=max(bs,cs-prices[i]);
            int tss=max(ss,bs+prices[i]);
            int tcs=max(cs,ss);
            
            ss=tss;
            bs=tbs;
            cs=tcs;
        }
        
        return ss;
    }
};
