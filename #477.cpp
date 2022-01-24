class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        
        int ans=0;
        
        for(int i=0;i<31;i++)
        {
            int cntz=0,cnto=0;
            
            for(int j=0;j<nums.size();j++)
            {
                if((nums[j]&(1<<i)))
                {
                    cnto++;
                }
                else
                {
                    cntz++;
                }
            }
            
            int pairs=cnto*cntz;
            
            ans+=pairs;
        }
        
        return ans;
    }
};
