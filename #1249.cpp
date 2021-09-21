class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n=s.size();
        
        int count=0;
        stack<int>stk;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                stk.push(i);
            }
            else if(s[i]==')')
            {
                if(stk.empty())
                {
                    s[i]='#';
                    
                }
                else
                {
                    stk.pop();
                }
            }
                
        }
        
        while(!stk.empty())
        {
            s[stk.top()]='#';
            stk.pop();
            count++;
        }
        
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='#')
            {
                s.erase(s.begin()+i);
                i--;
                n--;
                    
            }
        }
        
        
        
       
        
        
        
        return s;
    }
};
