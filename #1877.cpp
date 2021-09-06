class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
        
        vector<int>v;
        
        for(int i=0;i<n/2;i++)
        {
            v.push_back(nums[i]+nums[n-i-1]);
        }
        
        int max=INT_MIN;
        
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>max)
            {
                max=v[i];
            }
        }
        
        return max;
        
        
    }
};
