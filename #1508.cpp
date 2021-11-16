class Solution {
    int mod=1000000007;
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            int temp=0;
            for(int j=i;j<nums.size();j++)
            {
                temp+=nums[j];
                v.push_back(temp);
            }
        }
        
        sort(v.begin(),v.end());
        
        // for(int child:v)
        // {
        //     cout<<child<<" ";
        // }
        
        int ans=0;
        
        for(int i=left-1;i<=right-1;i++)
        {
            ans=ans%mod+v[i]%mod;
        }
        
        return ans;
    }
};
