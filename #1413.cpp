class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n=nums.size();
        
        int arr[n];
        
        arr[0]=nums[0];
        
        for(int i=1;i<n;i++)
        {
            arr[i]=arr[i-1]+nums[i];
        }
        
        int min=INT_MAX;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]<min)
            {
                min=arr[i];
            }
        }
        
        if(min>=0)
        {
            return 1;
        }
        else
        {
            return ((min)*-1)+1;
        }
    }
};
