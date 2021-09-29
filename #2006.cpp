class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count=0;
        unordered_map<int,int>m;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            auto it=m.find(nums[i]-k);
            if(it!=m.end())
            {
                count+=it->second;
            }
            it=m.find(abs(k+nums[i]));
            if(it!=m.end())
            {
                count+=it->second;
            }
            m[nums[i]]++;
        }
        
        
        return count;
    }
};
