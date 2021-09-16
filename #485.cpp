class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int fin=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                fin=max(fin,ans);
                ans=0;
                continue;
            }
            ans++;
        }
        fin=max(fin,ans);
        
        return fin;
    }
};
