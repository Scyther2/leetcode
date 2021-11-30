class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int>m;
        
        for(int i=lowLimit;i<=highLimit;i++)
        {
            int sum=0;
            int temp=i;
            while(temp>0)
            {
                sum+=temp%10;
                temp/=10;
            }
            
            m[sum]++;
        }
        
        int max=0;
        
        for(auto child:m)
        {
            if(max<child.second)
            {
                max=child.second;
            }
        }
        
        return max;
    }
};
