class Solution {
public:
    bool canConstruct(string s, int k) {
        
        int arr[26];
        
        for(int i=0;i<26;i++)
        {
            arr[i]=0;
        }
        
        for(int i=0;i<s.size();i++)
        {
            arr[s[i]-97]++;
        }
        
        int odd=0;
        int pair=0;
        
        for(int i=0;i<26;i++)
        {
            pair+=arr[i]/2;
            odd+=arr[i]%2;
        }
        
        if(odd>k)
        {
            return false;
        }
        
       else
       {
           if(odd+2*pair<k)
           {
               return false;
           }
           
           return true;
       }
        
        
        
        
    }
};
