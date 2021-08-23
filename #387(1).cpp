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
        
        unordered_map<int,int>m;
        
        for(int i=0;i<n;i++)
        {
            m.insert(make_pair(arr[s[i]-97],i));
        }
        
        auto it=m.find(1);
        
        if(it==m.end())
        {
            return -1;
        }
        else
        {
            return it->second;
        }
        
        
        
    }
};
