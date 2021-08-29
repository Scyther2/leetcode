class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        
        sort(nums2.begin(),nums2.end());
        
        set<int>s;
        
        for(int i=0;i<n1;i++)
        {
            int l=0;
            int r=n2-1;
            
            while(l<=r)
            {
                int mid=(l+r)/2;
                
                if(nums1[i]==nums2[mid])
                {
                    s.insert(nums1[i]);
                    break;
                }
                else if(nums1[i]>nums2[mid])
                {
                    l=mid+1;
                }
                else
                {
                    r=mid-1;
                }
            }
        }
        
        vector<int>ans;
        
        for(auto it:s)
        {
            ans.push_back(it);
        }
        
        return ans;
    }
};
