class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int mx=INT_MIN;
        int n=candies.size();
        for(int i=0;i<n;i++)
        {
            mx=max(mx,candies[i]);
        }
        
        int count=0;
        vector<bool>ans(n);
        
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=mx)
            {
                ans[i]=true;
            }
            else
            {
                ans[i]=false;
            }
        }
        
        return ans;
    }
};
