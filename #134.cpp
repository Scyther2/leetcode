class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int n=gas.size();
        
        vector<int>temp(n);
        
        temp[0]=gas[0]-cost[0];
        
        for(int i=1;i<n;i++)
        {
            temp[i]=temp[i-1]+gas[i]-cost[i];
        }
        
        if(temp[n-1]<0)
        {
            return -1;
        }
        
        int mn=INT_MAX;
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            if(temp[i]<mn)
            {
                mn=temp[i];
                ans=i;
            }
        }
        
        return (ans+1)%n;
    }
};
