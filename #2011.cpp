class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int t=0;
        
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i][0]=='X'){
                if(operations[i][1]=='-')
                {
                    t--;
                }
                else
                {
                    t++;
                }
            }
            
            else
            {
                if(operations[i][0]=='-')
                {
                    t--;
                }
                else
                {
                    t++;
                }
            }
        }
        
        return t;
        
    }
};
