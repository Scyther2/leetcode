class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& s) {
        stack<int>stk;
        vector<int>ans(s.size());
        
        for(int i=0;i<s.size();i++)
        {
            while(!stk.empty() && s[i]>s[stk.top()])
            {
                ans[stk.top()]=i-stk.top();
                stk.pop();
            }
            stk.push(i);
        }
        
        while(!stk.empty())
        {
            ans[stk.top()]=0;
            stk.pop();
        }
        
        return ans;
    }
};

