class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        
        int l=0;
        int r=n-1;
        
        int pivot=-1;
        
        if(nums.size()==1)
        {
            return nums[0];
        }
        
        if(nums[0]<nums[n-1])
        {
            return nums[0];
        }
        
        else
        {
            while(l<=r)
            {
                int mid=(l+r)/2;
                if(nums[mid]>nums[mid+1])
                {
                    pivot=mid;
                    break;
                }
                else if(!(nums[mid]>nums[mid+1])&&(nums[mid]>=nums[l]))
                {
                    l=mid+1;
                }
                else
                {
                    r=mid-1;
                }

        }
            
       
    }
     return nums[pivot+1];
    }
};
