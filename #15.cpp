class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        
        
        for(int i=0;i<n-2;i++)
        {
            int l=i+1;
            int r=n-1;
            if(i > 0 && nums[i] == nums[i-1])    
            {
                continue;
            }
            
            
            while(l<r)
            {
                
                if(nums[i]+nums[l]+nums[r]==0)
                {
                    vector<int>v;
                    v.push_back(nums[i]);
                    v.push_back(nums[l]);
                    v.push_back(nums[r]);
                    ans.push_back(v);
                    
                    while(l<r && nums[l]==nums[l+1])
                    {
                        l++;
                    }
                    while(l<r && nums[r]==nums[r-1])
                    {
                        r--;
                    }
                    
                    l++;
                    r--;
                    
                }
                else if(nums[i]+nums[l]+nums[r]<0)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
        }
        
        
        
        return ans;
    }
};
