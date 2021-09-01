class Solution {
public:
    
    int solve(vector<int>&v,int k,int i)
    {
        int n=v.size();
        if(n==1)
        {
            return v[0];
        }
        v.erase(v.begin()+(i+k-1)%n);
        return solve(v,k,(i+k-1)%n);
        
    }
    
    int findTheWinner(int n, int k) {
        vector<int>v(n);
        
        for(int i=0;i<n;i++)
        {
            v[i]=i+1;
        }
        
        return solve(v,k,0);
    }
};
