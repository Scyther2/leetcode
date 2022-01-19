class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        
        int n=prices.size();
        int ans=0;
        int bs=prices[0]*-1;
        int ss=0;
        
        for(int i=1;i<n;i++)
        {
            int tbs=max(bs,ss-prices[i]);
            int tss=max(ss,prices[i]+bs-fee);
            
            // cout<<tbs<<" "<<tss<<endl;
            
            bs=tbs;
            ss=tss;
        }
        
        return ss;
    }
};
