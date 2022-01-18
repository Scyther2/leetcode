class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int ans=0;
        
        int n=prices.size();
        
        if(n==0)
        {
            return 0;
        }
        
        int buy=prices[0];
        
        for(int i=1;i<n;i++)
        {
            if(prices[i-1]>prices[i])
            {
                ans+=prices[i-1]-buy;
                buy=prices[i];
            }
        }
        
        ans+=prices[n-1]-buy;
        
        return ans;
        
    }
};
