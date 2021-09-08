class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n=s.size();
        
        long long int sum[n];
        
        sum[n-1]=shifts[n-1];
        
        for(int i=n-2;i>=0;i--)
        {
            sum[i]=sum[i+1]+shifts[i];
        }
        
        for(int i=0;i<n;i++)
        {
            s[i]=((s[i]-97+sum[i])%26)+97;
        }
        
        return s;
    }
};
