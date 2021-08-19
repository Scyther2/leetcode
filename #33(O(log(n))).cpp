class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        
        int l=0;
        int r=n-1;
        
        int pivot=-1;
        
        if(nums.size()==1)
        {
            if(nums[0]==target)
            {
                return 0;
            }
            else
            {
                return -1;
            }
        }
        
        
        
        if(nums[0]>nums[n-1])
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
        
        l=0;
        r=pivot;
        
        while(l<=r)
        {
            int mid=(l+r)/2;
            
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        
        l=pivot+1;
        r=n-1;
        
        while(l<=r)
        {
            int mid=(l+r)/2;
            
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        
        
        
        return -1;
        
    }
};
