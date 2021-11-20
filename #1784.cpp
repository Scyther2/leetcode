class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int arr[101];
        
        for(int i=0;i<101;i++)
        {
            arr[i]=0;
        }
        
        for(int i=0;i<nums.size();i++)
        {
            arr[nums[i]]++;
        }
        
        int ans=0;
        
        for(int i=0;i<101;i++)
        {
            if(arr[i]==1)
            {
                ans+=i;
            }
        }
        
        return ans;
    }
};
