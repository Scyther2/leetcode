class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        
        if(n==1)
        {
            return true;
        }
        
        int maxpos=nums[0];
        
        
        for(int i=0;i<n && i<=maxpos;i++)
        {
            int curmax=i+nums[i];
            if(curmax>maxpos)
            {
                maxpos=curmax;
            }
        }
        
        if(maxpos<n-1)
        {
            return false;
        }
        return true;
    }
};
