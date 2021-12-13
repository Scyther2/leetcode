class Solution {
public:
    int maxPower(string s) {
        int ans=INT_MIN;
        int temp=1;
        
        for(int i=0;i<s.size();i++)
        {
            if(i<s.size()-1 && s[i]==s[i+1])
            {
                temp++;
            }
            else
            {
                ans=max(ans,temp);
                temp=1;
            }
        }
        
        return ans;
        
    }
        
};
    
