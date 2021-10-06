class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int ans=0;
        
        sort(piles.begin(),piles.end());
        
        int t=piles.size()/3;
        int i=piles.size()-2;
        
        while(t--)
        {
            ans+=piles[i];
            i-=2;
        }
        
        return ans;
        
    }
};
