class Solution {
public:
    bool PredictTheWinner(vector<int>& num) {

        return solve(0,0,0,num.size(),1,num);
    }
    
    bool solve(int sum1,int sum2,int i,int n,int c,vector<int>& nums)
    {
        
        if(n<=i)
        {
            if(sum1>=sum2)
                return true;
            else
                return false;
        }
        
        if(c%2==1)
            return solve(sum1+nums[n-1],sum2,i,n-1,c+1,nums)||solve(sum1+nums[i],sum2,i+1,n,c+1,nums);
        else
            return solve(sum1,sum2+nums[n-1],i,n-1,c+1,nums)&&solve(sum1,sum2+nums[i],i+1,n,c+1,nums);
            
            
    }
};
