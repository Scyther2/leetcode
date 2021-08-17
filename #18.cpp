class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        
        long long int t=(long long)target;
        
        for(int i=0;i<n-3;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;
            for(int j=i+1;j<n-2;j++)
            {
                if(j>i+1 && nums[j]==nums[j-1])
                    continue;
                int l=j+1;
                int r=n-1;
                while(l<r)
                {
                    long long int sum=(long long)nums[i]+nums[j]+nums[l]+nums[r];
                    if(sum==t)
                    {
                        vector<int>v={nums[i],nums[j],nums[l],nums[r]};
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
                    else if(sum>t)
                    {
                        r--;
                    }
                    else
                    {
                        l++;
                    }
                    
                }
            }
        }
        
        return ans;
    }
};
