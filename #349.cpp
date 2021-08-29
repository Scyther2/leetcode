class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        
        unordered_map<int,int>m;
        
        for(int i=0;i<n2;i++)
        {
            m[nums2[i]]++;
        }
        
        vector<int>ans;
        vector<int>v;
        
        for(int i=0;i<n1;i++)
        {
            if(m[nums1[i]]!=0)
            {
                v.push_back(nums1[i]);
            }
        }
        
        set<int>s;
        
        for(auto it:v)
        {
            s.insert(it);
        }
        
        for(auto it:s)
        {
            ans.push_back(it);
        }
        
        return ans;
    }
};
