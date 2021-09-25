class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0;
        int arr[2];
        arr[0]=0;
        arr[1]=0;
        int ans=0;
        arr[nums[0]]++;
        
        while(r<nums.size())
        {
            if(arr[0]<=k)
            {
                ans=max(ans,r-l+1);
                r++;
                if(r<nums.size())
                {
                    arr[nums[r]]++;
                }
            }
            else
            {
                while(arr[0]>k)
                {
                    arr[nums[l]]--;
                    l++;
                }
            }
        }
        
        return ans;
    }
};
