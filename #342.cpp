class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1)
        {
            return true;
        }
        if(n==0)
        {
            return false;
        }
        if(n%4==1)
        {
            return false;
        }
        if(n%4==2)
        {
            return false;
        }
        if(n%4==3)
        {
            return false;
        }
        
        return isPowerOfFour(n/4);
    }
};
