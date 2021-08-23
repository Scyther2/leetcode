class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        
        int arr[26];
        
        for(int i=0;i<26;i++)
        {
            arr[i]=0;
        }
        
        for(int i=0;i<n;i++)
        {
            arr[s[i]-97]++;
        }
        
        for(int i=0;i<n;i++)
        {
            if(arr[s[i]-97]==1)
            {
                return i;
            }
        }
        
        return -1;
        
    }
};
