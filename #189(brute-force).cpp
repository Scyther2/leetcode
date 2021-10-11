class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>ans;
        int n=nums.size();
        
        int i;
        int count=0;
        
        for(i=n-(k)%n;count<n;i++)
        {
            ans.push_back(nums[i%n]);
            count++;
        }
        
        for(int i=0;i<n;i++)
        {
            nums[i]=ans[i];
        }
        
    }
};
