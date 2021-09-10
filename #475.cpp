class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());
        int n=houses.size();
        
        vector<int>v(n,INT_MAX);
        
        
        int hl=0;
        for(int i=0;i<n && hl<heaters.size();)
        {
            if(houses[i]<=heaters[hl])
            {
                v[i]=heaters[hl]-houses[i];
                i++;
            }
            else
            {
                hl++;
            }
        }
        
        int rl=heaters.size()-1;
        for(int i=n-1;i>=0 && rl>=0;)
        {
            if(houses[i]>=heaters[rl])
            {
                v[i]=min(v[i],houses[i]-heaters[rl]);
                i--;
            }
            else
            {
                rl--;
            }
        }
        
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]>ans)
            {
                ans=v[i];
            }
        }
        
        
        
        return ans;
    }
};
