class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        
        reverse(nums2.begin(),nums2.end());
        
        int ans=0;
        int n=nums2.size();
        for(int i=0;i<nums1.size();i++)
        {
            auto it=lower_bound(nums2.begin(),nums2.end()-1-i,nums1[i]);
            int j=it-nums2.begin();
            ans=max(ans,n-1-j-i);
        }
        
        return ans;
    }
};
