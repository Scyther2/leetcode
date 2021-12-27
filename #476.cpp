class Solution {
public:
    int findComplement(int num) {
        
        // vector<int>temp;
        int i=0;
        int ans=0;
        
        while(num)
        {
            ans+=pow(2,i)*!(num%2);
            num/=2;
            i++;
        }
        
        
        
//         int ans=0;
        
//         for(int i=0;i<temp.size();i++)
//         {
//             ans+=pow(2,i)*!temp[i];
//         }
        
        return ans;
    }
};
