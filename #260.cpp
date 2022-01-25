class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        int x=0;
        
        for(int i=0;i<nums.size();i++)
        {
            x^=nums[i];
        }
        
        int bit=0;
        
        for(int i=0;i<31;i++)
        {
            if((x&(1<<i))!=0)
            {
                bit=i;
                break;
            }
        }
        
        int res=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if((nums[i]&(1<<bit))!=0)
            {
                res^=nums[i];
            }
        }
        
        int num=x^res;
        
        
        return (vector<int>){num,res};
    }
};
