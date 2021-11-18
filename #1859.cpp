class Solution {
public:
    string sortSentence(string s) {
        map<int,string>m;
        string temp="";
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>=48 && s[i]<=57)
            {
                
                m[int(s[i])]=temp;
                // cout<<m[int(s[i])]<<endl;
                temp="";
            }
            else if(s[i] == 32){
                continue;
            }
            else
            {
                temp+=s[i];
            }
        }
        
        string ans="";
        
        int i=0;
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(i !=m.size()-1){
                ans+=it->second;
                ans+=" ";
            }
            else{
                ans+=it->second;
            }
            i++;
            
        }
        
        
        return ans;
    }
};
