class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& f, vector<vector<int>>& s) {
        int i=0,j=0;
        
        vector<vector<int>>ans;
        
        int n=f.size();
        int m=s.size();
        
        while(i<n && j<m)
        {
            if(f[i][1]<s[j][0])
            {
                i++;
                continue;
            }
            if(s[j][1]<f[i][0])
            {
                j++;
                continue;
            }
            
            int l=max(f[i][0],s[j][0]);
            int r=min(f[i][1],s[j][1]);
            
            ans.push_back(vector<int>{l,r});
            
            if(f[i][1]<s[j][1])
            {
                i++;
            }
            else if(f[i][1]>s[j][1])
            {
                j++;
            }
            else
            {
                i++;
                j++;
            }
                
            
        }
        
        return ans;
    }
};
