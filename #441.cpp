class Solution {
public:
    int arrangeCoins(int n) {
        
        long long int sum=1;
        long long int index=0;
        long long int count=0;
        
        while(1)
        {
            if(index>=n)
            {
                break;
            }
            
            count++;
            index+=sum;
            sum++;
        }
        
        if(index==n)
        {
            return count;
        }
        
        return count-1;
    }
};
