class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int>rows;
        set<int>columns;
        
        int n=matrix.size();
        int m=matrix[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    rows.insert(i);
                    columns.insert(j);
                }
            }
        }
        
        for(int row:rows)
        {
            for(int i=0;i<m;i++)
            {
                matrix[row][i]=0;
            }
        }
        
        for(int column:columns)
        {
            for(int i=0;i<n;i++)
            {
                matrix[i][column]=0;
            }
        }
    }
};
