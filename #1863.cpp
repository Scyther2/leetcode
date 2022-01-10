class Solution {
public:
    void solve(int index, vector<int>&nums,vector<int>&temp,int num,int size)
    {
        if(index==size)
        {
            temp.push_back(num);
            return;
        }
        
        int n=num;
        num=num^nums[index];
        solve(index+1,nums,temp,num,size);
        num=n;
        
        solve(index+1,nums,temp,num,size);
    }
    int subsetXORSum(vector<int>& nums) {
         vector<int>temp;
        int n=nums.size();
        
        int num=0;
        
        solve(0,nums,temp,num,n);
        
        int sum=0;
        
        for(int i=0;i<temp.size();i++)
        {
            
            sum+=temp[i];
        }
        
        return sum;
        
        
    }
};
