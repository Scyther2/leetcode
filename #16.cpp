class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans=INT_MAX;
        int diff=INT_MAX;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++)
        {
            int l=i+1;
            int r=n-1;
            
            while(l<r)
            {
                int sum=nums[l]+nums[r]+nums[i];
                if(sum==target)
                {
                    ans=sum;
                    return ans;
                }
                else if(diff>abs(sum-target))
                {
                    diff=abs(sum-target);
                    ans=sum;
                }
                else if(sum>target)
                {
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
