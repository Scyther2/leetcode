class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>temp;
        unordered_map<int,int>m;
        int n=arr.size();
        
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        
        for(int i=1;i<=2000;i++)
        {
            if(m.find(i)!=m.end())
            {
                continue;
            }
            temp.push_back(i);
        }
        
        return temp[k-1];
    }
};
