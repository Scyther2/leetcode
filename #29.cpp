class Solution {
public:
    int divide(int dividend, int divisor) {
        
        if(dividend==INT_MIN && divisor==-1)
        {
            return INT_MAX;
        }
        long long int x=dividend,y=divisor;
        
        if(x<0)
        {
            x*=-1;
        }
        if(y<0)
        {
            y*=-1;
        }
        
        long long int count=0;
        
        
        while(x>=y)
        {
            long long int temp=y,t=1;
            while((temp<<1)<x)
            {
                temp<<=1;
                t<<=1;
            }
            x-=temp;
            count+=t;
        }
        
        
        
        if((dividend<0 && divisor>0) || (dividend>0 && divisor<0))
        {
            count*=-1;
        }
        
        
        
        return count;
        
        
    }
};
