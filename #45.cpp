class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        
        if(n==1)
        {
            return 0;
        }
        
        int cur=0;
        int maxpos=0;
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            maxpos=max(maxpos,i+nums[i]);
            if(i>=cur && i!=n-1)
            {
                ans++;
                cur=maxpos;
            }
        }
        
        return ans;
        
        
        
    }
};
