class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>m;
        
        for(int i=0;i<arr1.size();i++)
        {
            m[arr1[i]]++;
        }
        sort(arr1.begin(),arr1.end());
        
        vector<int>ans;
        
        for(int i=0;i<arr2.size();i++)
        {
            auto it=m.find(arr2[i]);
            int count=it->second;
            
            while(count--)
            {
                ans.push_back(it->first);
            }
        }
        
        unordered_map<int,int>m1;
        
        for(int i=0;i<ans.size();i++)
        {
            m1[ans[i]]++;
        }
        
        for(int i=0;i<arr1.size();i++)
        {
            auto it=m1.find(arr1[i]);
            if(it==m1.end())
            {
                ans.push_back(arr1[i]);
            }
        }
        
        return ans;
        
    }
};
