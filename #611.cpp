class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        
        sort(nums.begin(),nums.end());
        
        for(int i=n-1;i>=0;i--)
        {
            int l=0;
            int r=i-1;
            
            while(l<r)
            {
                if(nums[l]+nums[r]>nums[i])
                {
                    ans+=r-l;
                    r--;
                }
                else
                {
                    l++;
                }
            }
        }
        
        return ans;
        
    }
};
