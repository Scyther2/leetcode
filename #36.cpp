class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int arr[9]={0};
        vector<char>v;
        
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                v.push_back(board[i][j]);
            }
        }
        
        for(int i=0;i<9;i++)
        {
            if(v[i]>=49 && v[i]<=57)
            {
                arr[v[i]-49]++;
            }
            
        }
        
        for(int i=0;i<9;i++)
        {
            if(arr[i]>1)
            {
                return false;
            }
        }
        
        v.clear();
        
        for(int i=0;i<9;i++)
        {
            arr[i]=0;
        }
        
        //******************************
        
        for(int i=0;i<3;i++)
        {
            for(int j=3;j<6;j++)
            {
                v.push_back(board[i][j]);
            }
        }
        
        for(int i=0;i<9;i++)
        {
            if(v[i]>=49 && v[i]<=57)
            {
                arr[v[i]-49]++;
            }
            
        }
        
        for(int i=0;i<9;i++)
        {
            if(arr[i]>1)
            {
                return false;
            }
        }
        
        v.clear();
        
        for(int i=0;i<9;i++)
        {
            arr[i]=0;
        }
        
        //******************************
        
        for(int i=0;i<3;i++)
        {
            for(int j=6;j<9;j++)
            {
                v.push_back(board[i][j]);
            }
        }
        
        for(int i=0;i<9;i++)
        {
            if(v[i]>=49 && v[i]<=57)
            {
                arr[v[i]-49]++;
            }
            
        }
        
        for(int i=0;i<9;i++)
        {
            if(arr[i]>1)
            {
                return false;
            }
        }
        
        v.clear();
        
        for(int i=0;i<9;i++)
        {
            arr[i]=0;
        }
        
        //******************************
        
        for(int i=3;i<6;i++)
        {
            for(int j=0;j<3;j++)
            {
                v.push_back(board[i][j]);
            }
        }
        
        for(int i=0;i<9;i++)
        {
            if(v[i]>=49 && v[i]<=57)
            {
                arr[v[i]-49]++;
            }
            
        }
        
        for(int i=0;i<9;i++)
        {
            if(arr[i]>1)
            {
                return false;
            }
        }
        
        v.clear();
        
        for(int i=0;i<9;i++)
        {
            arr[i]=0;
        }
        
        //******************************
        
        for(int i=3;i<6;i++)
        {
            for(int j=3;j<6;j++)
            {
                v.push_back(board[i][j]);
            }
        }
        
        for(int i=0;i<9;i++)
        {
            if(v[i]>=49 && v[i]<=57)
            {
                arr[v[i]-49]++;
            }
            
        }
        
        for(int i=0;i<9;i++)
        {
            if(arr[i]>1)
            {
                return false;
            }
        }
        
        v.clear();
        
        for(int i=0;i<9;i++)
        {
            arr[i]=0;
        }
        
        //******************************
        
        for(int i=3;i<6;i++)
        {
            for(int j=6;j<9;j++)
            {
                v.push_back(board[i][j]);
            }
        }
        
        for(int i=0;i<9;i++)
        {
            if(v[i]>=49 && v[i]<=57)
            {
                arr[v[i]-49]++;
            }
            
        }
        
        for(int i=0;i<9;i++)
        {
            if(arr[i]>1)
            {
                return false;
            }
        }
        
        v.clear();
        
        for(int i=0;i<9;i++)
        {
            arr[i]=0;
        }
        
        //******************************
        
        for(int i=6;i<9;i++)
        {
            for(int j=0;j<3;j++)
            {
                v.push_back(board[i][j]);
            }
        }
        
        for(int i=0;i<9;i++)
        {
            if(v[i]>=49 && v[i]<=57)
            {
                arr[v[i]-49]++;
            }
            
        }
        
        for(int i=0;i<9;i++)
        {
            if(arr[i]>1)
            {
                return false;
            }
        }
        
        v.clear();
        
        for(int i=0;i<9;i++)
        {
            arr[i]=0;
        }
        
        //******************************
        
        for(int i=6;i<9;i++)
        {
            for(int j=3;j<6;j++)
            {
                v.push_back(board[i][j]);
            }
        }
        
        for(int i=0;i<9;i++)
        {
            if(v[i]>=49 && v[i]<=57)
            {
                arr[v[i]-49]++;
            }
            
        }
        
        for(int i=0;i<9;i++)
        {
            if(arr[i]>1)
            {
                return false;
            }
        }
        
        v.clear();
        
        for(int i=0;i<9;i++)
        {
            arr[i]=0;
        }
        
        //******************************
        
        for(int i=6;i<9;i++)
        {
            for(int j=6;j<9;j++)
            {
                v.push_back(board[i][j]);
            }
        }
        
        for(int i=0;i<9;i++)
        {
            if(v[i]>=49 && v[i]<=57)
            {
                arr[v[i]-49]++;
            }
            
        }
        
        for(int i=0;i<9;i++)
        {
            if(arr[i]>1)
            {
                return false;
            }
        }
        
        v.clear();
        
        for(int i=0;i<9;i++)
        {
            arr[i]=0;
        }
        
        //******************************
        
        for(int i=0;i<9;i++)
        {
            if(board[0][i]>=49 && board[0][i]<=57)
            {
                arr[board[0][i]-49]++;
            }
            
        }
        
        for(int i=0;i<9;i++)
        {
            if(arr[i]>1)
            {
                return false;
            }
        }
        
        for(int i=0;i<9;i++)
        {
            arr[i]=0;
        }
        
        //******************************
        
        for(int i=0;i<9;i++)
        {
            if(board[1][i]>=49 && board[1][i]<=57)
            {
                arr[board[1][i]-49]++;
            }
            
        }
        
        for(int i=0;i<9;i++)
        {
            if(arr[i]>1)
            {
                return false;
            }
        }
        
        for(int i=0;i<9;i++)
        {
            arr[i]=0;
        }
        
        //******************************
        
        for(int i=0;i<9;i++)
        {
            if(board[2][i]>=49 && board[2][i]<=57)
            {
                arr[board[2][i]-49]++;
            }
            
        }
        
        for(int i=0;i<9;i++)
        {
            if(arr[i]>1)
            {
                return false;
            }
        }
        
        for(int i=0;i<9;i++)
        {
            arr[i]=0;
        }
        
        //******************************
        
        for(int i=0;i<9;i++)
        {
            if(board[3][i]>=49 && board[3][i]<=57)
            {
                arr[board[3][i]-49]++;
            }
            
        }
        
        for(int i=0;i<9;i++)
        {
            if(arr[i]>1)
            {
                return false;
            }
        }
        
        for(int i=0;i<9;i++)
        {
            arr[i]=0;
        }
        
        //******************************
        
        for(int i=0;i<9;i++)
        {
            if(board[4][i]>=49 && board[4][i]<=57)
            {
                arr[board[4][i]-49]++;
            }
            
        }
        
        for(int i=0;i<9;i++)
        {
            if(arr[i]>1)
            {
                return false;
            }
        }
        
        for(int i=0;i<9;i++)
        {
            arr[i]=0;
        }
        
        //******************************
        
        for(int i=0;i<9;i++)
        {
            if(board[5][i]>=49 && board[5][i]<=57)
            {
                arr[board[5][i]-49]++;
            }
            
        }
        
        for(int i=0;i<9;i++)
        {
            if(arr[i]>1)
            {
                return false;
            }
        }
        
        for(int i=0;i<9;i++)
        {
            arr[i]=0;
        }
        
        //******************************
        
        for(int i=0;i<9;i++)
        {
            if(board[6][i]>=49 && board[6][i]<=57)
            {
                arr[board[6][i]-49]++;
            }
            
        }
        
        for(int i=0;i<9;i++)
        {
            if(arr[i]>1)
            {
                return false;
            }
        }
        
        for(int i=0;i<9;i++)
        {
            arr[i]=0;
        }
        
        //******************************
        
        for(int i=0;i<9;i++)
        {
            if(board[7][i]>=49 && board[7][i]<=57)
            {
                arr[board[7][i]-49]++;
            }
            
        }
        
        for(int i=0;i<9;i++)
        {
            if(arr[i]>1)
            {
                return false;
            }
        }
        
        for(int i=0;i<9;i++)
        {
            arr[i]=0;
        }
        
        //******************************
        
        for(int i=0;i<9;i++)
        {
            if(board[8][i]>=49 && board[8][i]<=57)
            {
                arr[board[8][i]-49]++;
            }
            
        }
        
        for(int i=0;i<9;i++)
        {
            if(arr[i]>1)
            {
                return false;
            }
        }
        
        for(int i=0;i<9;i++)
        {
            arr[i]=0;
        }
        
        //******************************
        
        for(int i=0;i<9;i++)
        {
            if(board[i][0]>=49 && board[i][0]<=57)
            {
                arr[board[i][0]-49]++;
            }
        }
        
        for(int i=0;i<9;i++)
        {
            if(arr[i]>1)
            {
                return false;
            }
        }
        
        for(int i=0;i<9;i++)
        {
            arr[i]=0;
        }
        
        //******************************
        
        for(int i=0;i<9;i++)
        {
            if(board[i][1]>=49 && board[i][1]<=57)
            {
                arr[board[i][1]-49]++;
            }
        }
        
        for(int i=0;i<9;i++)
        {
            if(arr[i]>1)
            {
                return false;
            }
        }
        
        for(int i=0;i<9;i++)
        {
            arr[i]=0;
        }
        
        //******************************
        
        for(int i=0;i<9;i++)
        {
            if(board[i][2]>=49 && board[i][2]<=57)
            {
                arr[board[i][2]-49]++;
            }
        }
        
        for(int i=0;i<9;i++)
        {
            if(arr[i]>1)
            {
                return false;
            }
        }
        
        for(int i=0;i<9;i++)
        {
            arr[i]=0;
        }
        
        //******************************
        
        for(int i=0;i<9;i++)
        {
            if(board[i][3]>=49 && board[i][3]<=57)
            {
                arr[board[i][3]-49]++;
            }
        }
        
        for(int i=0;i<9;i++)
        {
            if(arr[i]>1)
            {
                return false;
            }
        }
        
        for(int i=0;i<9;i++)
        {
            arr[i]=0;
        }
        
        //******************************
        
        for(int i=0;i<9;i++)
        {
            if(board[i][4]>=49 && board[i][4]<=57)
            {
                arr[board[i][4]-49]++;
            }
        }
        
        for(int i=0;i<9;i++)
        {
            if(arr[i]>1)
            {
                return false;
            }
        }
        
        for(int i=0;i<9;i++)
        {
            arr[i]=0;
        }
        
        //******************************
        
        for(int i=0;i<9;i++)
        {
            if(board[i][5]>=49 && board[i][5]<=57)
            {
                arr[board[i][5]-49]++;
            }
        }
        
        for(int i=0;i<9;i++)
        {
            if(arr[i]>1)
            {
                return false;
            }
        }
        
        for(int i=0;i<9;i++)
        {
            arr[i]=0;
        }
        
        //******************************
        
        for(int i=0;i<9;i++)
        {
            if(board[i][6]>=49 && board[i][6]<=57)
            {
                arr[board[i][6]-49]++;
            }
        }
        
        for(int i=0;i<9;i++)
        {
            if(arr[i]>1)
            {
                return false;
            }
        }
        
        for(int i=0;i<9;i++)
        {
            arr[i]=0;
        }
        
        //******************************
        
        for(int i=0;i<9;i++)
        {
            if(board[i][7]>=49 && board[i][7]<=57)
            {
                arr[board[i][7]-49]++;
            }
        }
        
        for(int i=0;i<9;i++)
        {
            if(arr[i]>1)
            {
                return false;
            }
        }
        
        for(int i=0;i<9;i++)
        {
            arr[i]=0;
        }
        
        //******************************
        
        for(int i=0;i<9;i++)
        {
            if(board[i][8]>=49 && board[i][8]<=57)
            {
                arr[board[i][8]-49]++;
            }
        }
        
        for(int i=0;i<9;i++)
        {
            if(arr[i]>1)
            {
                return false;
            }
        }
        
        for(int i=0;i<9;i++)
        {
            arr[i]=0;
        }
        
        //******************************
        
        
        
        
        
        return true;
        
    }
};
