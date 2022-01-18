class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        
        int size=f.size();
        if(size==1)
        {
            if((f[0]==0 && n==1) || (f[0]==0 && n==0) || (f[0]==1 && n==0) )
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        
        if(f[0]==0 && f[1]==0)
        {
            n--;
            f[0]=1;
        }
        
        for(int i=1;i<size-1;i++)
        {
            if(f[i]==0 && f[i-1]==0 && f[i+1]==0)
            {
                n--;
                f[i]=1;
            }
        }
        
        if(f[size-1]==0 && f[size-2]==0)
        {
            n--;
        }
        
        if(n<=0)
        {
            return true;
        }
        
        return false;
    }
};
