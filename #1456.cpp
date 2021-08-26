class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        
        int vw[n+1];
        
        vw[0]=0;
        
        for(int i=1;i<n+1;i++)
        {
            if(s[i-1]=='a'||s[i-1]=='e'||s[i-1]=='o'||s[i-1]=='i'||s[i-1]=='u')
            {
                vw[i]=vw[i-1]+1;
            }
            else
            {
                vw[i]=vw[i-1];
            }
        }
        
        int i=0,j=k;
        int ans=0;
        
        
        
        while(j<n+1)
        {
            ans=max(ans,vw[j]-vw[i]);
            i++;
            j++;
        }
        
        return ans;
    }
};
