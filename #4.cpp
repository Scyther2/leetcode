class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        
        vector<int>v;
        v.push_back(0);
        
        while(i<nums1.size() || j<nums2.size())
        {
            if(i<nums1.size() && j<nums2.size())
            {
                if(nums1[i]<nums2[j])
                {
                    v.push_back(nums1[i]);
                    i++;
                }
                else
                {
                    v.push_back(nums2[j]);
                    j++;
                }
            }
            
            else if(i<nums1.size())
            {
                v.push_back(nums1[i]);
                i++;
            }
            
            else
            {
                v.push_back(nums2[j]);
                j++;
            }
        }
        
        int x=v.size();
        
        if(x%2==0)
        {
            return (double)v[(x/2)];
        }
        
        return (double)(v[(x-1)/2]+v[(x+1)/2])/2;
        
    }
};
