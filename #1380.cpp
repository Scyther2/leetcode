class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>row;
        vector<int>colms;
        
        int n=matrix.size();
        int m=matrix[0].size();
        
        for(int i=0;i<n;i++)
        {
            int ans=INT_MAX;
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]<ans)
                {
                    ans=matrix[i][j];
                }
            }
            row.push_back(ans);
        }
        
        for(int i=0;i<m;i++)
        {
            int ans=INT_MIN;
            for(int j=0;j<n;j++)
            {
                if(matrix[j][i]>ans)
                {
                    ans=matrix[j][i];
                }
            }
            colms.push_back(ans);
        }
        
        unordered_map<int,int>ma;
        
        for(int i=0;i<row.size();i++)
        {
            ma[row[i]]++;
        }
        
        vector<int>fin;
        
        for(int j=0;j<colms.size();j++)
        {
            auto it=ma.find(colms[j]);
            
                if(it!=ma.end())
                {
                    fin.push_back(colms[j]);
                }
            
        }
        
        return fin;
        
        
        
        
    }
};
