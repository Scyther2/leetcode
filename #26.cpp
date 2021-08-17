class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<long long>temp;
        int ans=0;
        if(nums.size()==0)
        {
            ans=0;
        }
        else
        {
            temp.push_back(nums[0]);
        for(long long i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
            {
                temp.push_back(nums[i]);
            }
        }
        nums.clear();
        for(long long i=0;i<temp.size();i++)
        {
            nums.push_back(temp[i]);
        }
            ans=nums.size();
        }
        return ans;
    }
};
