class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int>ans(n);
        
        for(int i=0;i<n;i++)
        {
            ans[i]=0;
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    ans[i]+=(boxes[j]-'0')*(abs(i-j));
                }
            }
        }
        
        return ans;
    }
};
