class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>temp(nums2.size());
        stack<int>stk;
        
        for(int i=0;i<nums2.size();i++)
        {
            while(!stk.empty() && nums2[i]>nums2[stk.top()])
            {
                temp[stk.top()]=nums2[i];
                stk.pop();
            }
            stk.push(i);
        }
        
        while(!stk.empty())
        {
            temp[stk.top()]=-1;
            stk.pop();
        }
        
        unordered_map<int,int>m;
        
        for(int i=0;i<nums2.size();i++)
        {
            m.insert(make_pair(nums2[i],temp[i]));
        }
        
        vector<int>ans;
        
        for(int i=0;i<nums1.size();i++)
        {
            if(m.find(nums1[i])!=m.end())
            {
                auto it=m.find(nums1[i]);
                ans.push_back(it->second);
            }
        }
        
        return ans;
        
    }
};
