class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>m;
        
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        string ans="";
        
        vector<string>temp;
        
        for(int i=0;i<arr.size();i++)
        {
            auto it=m.find(arr[i]);
            
            if(it->second==1)
            {
                temp.push_back(it->first);
            }
        }
        
        if(k<=temp.size())
        {
            return temp[k-1];
        }
        
        return ans;
        
        
        
        
    }
};
