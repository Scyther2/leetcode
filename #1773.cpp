class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int a=0;
        
        if(ruleKey=="color")
        {
            a=1;
        }
        if(ruleKey=="name")
        {
            a=2;
        }
        
        
        int ans=0;
        
        for(int i=0;i<items.size();i++)
        {
            if(items[i][a]==ruleValue)
            {
                ans++;
            }
        }
        
        return ans;
    }
};
