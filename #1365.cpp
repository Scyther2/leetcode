class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        
        int arr[n];
        
        for(int i=0;i<n;i++)
        {
            arr[i]=nums[i];
        }
        
        sort(arr,arr+n);
        
        unordered_map<int,int>m1,m2;
        
        for(int i=0;i<n;i++)
        {
            m1[arr[i]]++;
        }
        
        for(int i=1;i<n;i++)
        {
            m2[arr[i]]=i;
        }
        
        vector<int>v;
        
        for(int i=0;i<n;i++)
        {
            int x=m2[nums[i]]-m1[nums[i]]+1;
            v.push_back(x);
        }
        
        return v;
    }
};
