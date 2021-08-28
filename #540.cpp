class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        
        int l=0,r=n-1;
        
        if(n==1)
        {
            return nums[0];
        }
        
        while(l<=r)
        {
            int mid=(l+r)/2;
            cout<<mid<<" ";
            if(mid==0)
            {
                if(nums[0]!=nums[1])
                {
                    return nums[0];
                }
                else
                {
                    l=mid+1;
                }
            }
            else if(mid==n-1)
            {
                if(nums[n-1]!=nums[n-2])
                {
                    return nums[n-1];
                }
                else
                {
                    r=mid-1;
                }
            }
            else
            {
                if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])
                {
                    return nums[mid];
                }
                else
                {
                    if(mid%2==0)
                {
                    if(nums[mid]!=nums[mid+1])
                    {
                        r=mid-1;
                    }
                    else
                    {
                        l=mid+1;
                    }
                }
                    else
                {
                    if(nums[mid]!=nums[mid+1])
                    {
                        l=mid+1;
                    }
                    else
                    {
                        r=mid-1;
                    }
                }
                }
            }
            
        }
        return 0;
    }
};
