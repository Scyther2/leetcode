class Solution {
public:
    vector<int>v;
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        bool z=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    v.push_back(i);
                    v.push_back(j);
                    z=1;
                    break;
                }
            }
            if(z==1)
            {
                break;
            }
        }
       return v;
    }
};
