class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int l=-1;
        
        int n=nums.size();
        
        for(int i=n-1;i>0;i--)
        {
            if(nums[i-1]<nums[i])
            {
                l=i-1;
                break;
            }
        }
        
        int diff=INT_MAX;
        
        int num;
        
        if(l!=-1)
        {
            num=nums[l];
        }
        int x=0;
        int index=0;
        
        for(int i=l+1;i<n;i++)
        {
            if(diff>abs(num-nums[i]) && (nums[i]-num)>0)
            {
                diff=abs(num-nums[i]);
                x=nums[i];
                index=i;
            }
        }
        
        if(l!=-1)
        {
            int temp=nums[l];
            nums[l]=nums[index];
            nums[index]=temp;
            
            
            
            
        }
        
        auto it=nums.begin()+l+1;
        
        sort(it,nums.end());
        
        
        
    }
};
