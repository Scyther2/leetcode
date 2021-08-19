class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            int l=i+1;
            int r=n-1;
            
            while(l<=r)
            {
                int mid=(l+r)/2;
                
                int sum=nums[i]+nums[mid];
                
                if(sum==target)
                {
                    return (vector<int>){i+1,mid+1};
                }
                else if(sum<target)
                {
                    l=mid+1;
                }
                else
                {
                    r=mid-1;
                }

            }
        }
        return (vector<int>){0,0};
    }
};
