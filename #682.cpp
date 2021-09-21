class Solution {
public:
    int calPoints(vector<string>& s) {
        int n=s.size();
        
        stack<int>stk;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=="+")
            {
                int last=stk.top();
                stk.pop();
                int secondlast=stk.top();
                stk.push(last);
                stk.push(last+secondlast);
            }
            else if(s[i]=="D")
            {
                int last=stk.top();
                stk.push(last*2);
            }
            else if(s[i]=="C")
            {
                stk.pop();
            }
            else
            {
                stk.push(stoi(s[i]));
            }
        }
        
        int ans=0;
        
        while(!stk.empty())
        {
            ans+=stk.top();
            stk.pop();
        }
        
        return ans;
    }
};
