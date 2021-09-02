class Solution {
public:
    void invert(string& str)
    {
        int n=str.size();
        for(int i=0;i<n;i++)
        {
            if(str[i]=='0')
            {
                str[i]='1';
            }
            else
            {
                str[i]='0';
            }
        }
    }
    
    void reverse(string& str)
    {
        int n=str.size();
        for(int i=0;i<n/2;i++)
        {
            swap(str[i],str[n-i-1]);
        }
    }
    
    string solve(int n)
    {   
        if(n==1)
        {
            return "0";
        }
        
        string s=solve(n-1)+"1"+reverse(invert(solve(n-1));
        return s;
    }
    
    char findKthBit(int n, int k) {
        string s;
        
        s=solve(n);
        
        char x=s[k-1];
        
        return x;
    }
};
