class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<vector<int>>v(n+1,vector<int>(n+1,0));
        
        for(int i=0;i<trust.size();i++)
        {
            v[trust[i][0]][trust[i][1]]=1;
        }
        
        for(int j=n;j>=1;j--)
        {
            bool flag=0;
            bool flag1=0;
            
            for(int i=1;i<=n;i++)
            {
                if(i!=j && v[i][j]!=1)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                continue;
            }
            for(int i=1;i<=n;i++)
            {
                if(i!=j && v[j][i]!=0)
                {
                    flag1=1;
                    break;
                }
            }
            if(flag1==1)
            {
                continue;
            }
            
            return j;
            
        }
        
        return -1;
        
        
        
    }
};
