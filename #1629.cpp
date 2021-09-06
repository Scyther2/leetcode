class Solution {
public:
    char slowestKey(vector<int>& a, string b) {
        map<int,char>m;
        
        int n=a.size();
        int diff[n];
        
        diff[0]=a[0];
        
        for(int i=1;i<n;i++)
        {
            diff[i]=a[i]-a[i-1];
        }
        
        for(int i=0;i<b.size();i++)
        {
            if(m[diff[i]]<b[i])
            {
                m[diff[i]]=b[i];
            }
            else
            {
                continue;
            }
        }
        
        int max=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(diff[i]>max)
            {
                max=diff[i];
            }
        }
        
        char ans=m[max];
        
        return ans;
    }
};
