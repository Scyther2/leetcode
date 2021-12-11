class Solution {
public:
    string truncateSentence(string s, int k) {
        
        vector<string>temp;
        string ans="";
        
        string st="";
        
        for(int i=0;i<s.size();i++)
        {
            st+=s[i];
            if(s[i]==' ')
            {
                temp.push_back(st);
                st="";
            }
        }
        temp.push_back(st);
        
        for(int i=0;i<k-1;i++)
        {
            ans+=temp[i];
            
        }
        
        ans+=temp[k-1];
        if(temp.size()!=k)
        {
            ans.pop_back();
        }
        
        return ans;
        
    }
};
