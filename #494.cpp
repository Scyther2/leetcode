class Solution {
public:
    int fun(vector<int>&arr,int sum)
    {
        int n=arr.size();
        
        int mat[n+1][sum+1];
        
        for(int i=0;i<=sum;i++)
        {
            mat[0][i]=0;
        }
        
        for(int i=0;i<=n;i++)
        {
            mat[i][0]=1;
        }
        
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=sum;j++)
            {
                if(arr[i-1]<=j)
                {
                    mat[i][j]=mat[i-1][j-arr[i-1]]+mat[i-1][j];
                }
                else
                {
                    mat[i][j]=mat[i-1][j];
                }
            }
        }
        
        return mat[n][sum];
        
    }
    int findTargetSumWays(vector<int>& arr, int target) {
        int n=arr.size();
        
        int temp=0;
        
        for(int i=0;i<arr.size();i++)
        {
            temp+=arr[i];
        }
        
        if((target+temp)<0 || (target+temp)%2==1)
        {
            return 0;
        }
        
        
            int fin=fun(arr,(target+temp)/2);
        
        
        return fin;
    }
};
