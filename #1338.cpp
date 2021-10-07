class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        int n=arr.size();
        
        unordered_map<int,int>m;
        
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        
        vector<int>v;
        
        for(auto it:m)
        {
            v.push_back(it.second);
        }
        
        sort(v.begin(),v.end(),greater<int>());
        
        int x=n/2;
        
        int ans=0;
        int count=0;
        
        for(int i=0;i<v.size();i++)
        {
            count+=v[i];
            ans++;
            if(count>=x)
            {
                break;
            }
        }
        
        return ans;
        
    }
};
