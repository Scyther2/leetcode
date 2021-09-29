class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n1=s.size();
        int n2=p.size();
        vector<int>ans;
        
        if(n1<n2)
        {
            return ans;
        }
        
        int arr1[26],arr2[26];
        
        for(int i=0;i<26;i++)
        {
            arr1[i]=0;
            arr2[i]=0;
        }
        
        for(int i=0;i<n2;i++)
        {
            arr1[p[i]-97]++;
            arr2[s[i]-97]++;
        }
        bool flag=0;
        
        for(int i=0;i<26;i++)
        {
            if(arr1[i]!=arr2[i])
            {
                flag=1;
            }
            
        }
        
        if(!flag)
        {
            ans.push_back(0);
        }
        
        flag=0;
        
        int l=0,r=n2-1;
        
        l++;
        r++;
        
        while(r<n1)
        {
            flag=0;
            arr2[s[l-1]-97]--;
            arr2[s[r]-97]++;
            for(int i=0;i<26;i++)
            {
                if(arr1[i]!=arr2[i])
                {
                    flag=1;
                    break;
                }
            }
            if(!flag)
            {
                ans.push_back(l);
            }
            l++;
            r++;
            
        }
        
        return ans;
    }
};
