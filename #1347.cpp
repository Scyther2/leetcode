class Solution {
public:
    int minSteps(string s, string t) {
        int arr1[26];
        int arr2[26];
        
        for(int i=0;i<26;i++)
        {
            arr1[i]=0;
            arr2[i]=0;
        }
        
        int count=0;
        
        for(int i=0;i<s.size();i++)
        {
            arr1[s[i]-97]++;
            arr2[t[i]-97]++;
        }
        
        for(int i=0;i<26;i++)
        {
            count+=abs(arr1[i]-arr2[i]);
        }
        
        return count/2;
    }
};
