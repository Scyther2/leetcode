class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        
        unordered_map<int,int>m;
        
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        
        for(auto child:m)
        {
            if(child.second!=1)
            {
                return child.first;
            }
        }
        
        return 0;
        
    }
};
