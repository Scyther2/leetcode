class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int size=nums.size();
        vector<int>odd,even;
        
        for(int i=0;i<size;i++)
        {
            if(nums[i]%2==0)
            {
                even.push_back(nums[i]);
            }
            else
            {
                odd.push_back(nums[i]);
            }
        }
        
        vector<int>ans;
        
        int count=0;
        
        while(count<size/2)
        {
            ans.push_back(even[count]);
            ans.push_back(odd[count]);
            count++;
        }
        return ans;
    }
};
