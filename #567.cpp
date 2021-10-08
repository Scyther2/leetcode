class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        if(n>s2.size())
        {
            return false;
        }
        
        vector<int>arr(26),arr1(26);
        
        for(int i=0;i<26;i++)
        {
            arr[i]=0;
            arr1[i]=0;
        }
        
        for(int i=0;i<n;i++)
        {
            arr[s1[i]-97]++;
        }
        
        int l=0,r=n-1;
        
        for(int i=0;i<=r;i++)
        {
            arr1[s2[i]-97]++;
        }
        
        
        
        for(int i=0;i<26;i++)
        {
            if(arr==arr1)
            {
                return true;
            }
        }
        
        l++;
        r++;
        
        while(r<s2.size())
        {
            arr1[s2[l-1]-97]--;
            arr1[s2[r]-97]++;
            
            if(arr==arr1)
            {
                return true;
            }
            
            l++;
            r++;
            
            
        }
        
        return false;
        
        
    }
};
