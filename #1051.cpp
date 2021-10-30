class Solution {
public:
    int heightChecker(vector<int>& h) {
        int n=h.size();
        
        vector<int>temp(n);
        
        for(int i=0;i<n;i++)
        {
            temp[i]=h[i];
        }
        
        
        sort(temp.begin(),temp.end());
        
        int count=0;
        
        for(int i=0;i<n;i++)
        {
            if(h[i]!=temp[i])
            {
                count++;
            }
        }
        
        return count;
        
    }
};
