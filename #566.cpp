class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n=mat.size();
        int m=mat[0].size();
        
        if(n*m!=r*c)
        {
            return mat;
        }
        
        vector<int>temp;
        vector<vector<int>>ans(r,vector<int>(c));
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                temp.push_back(mat[i][j]);
            }
        }
        
        int count=0;
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                ans[i][j]=temp[count];
                count++;
            }
        }
        
        return ans;
        
    }
};
