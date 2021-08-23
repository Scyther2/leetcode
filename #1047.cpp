class Solution {
public:
    string removeDuplicates(string s) {
        stack <char> b;
        int n=s.size();
        for(int i=0;i<n;i++){
            
            
                if(!b.empty() && (s[i] == b.top())){
                    b.pop();
                }
                else{
                    b.push(s[i]);
                }
            
        }
        
             
        string st="",new_string="";
        while(!b.empty() ){
            
            st.push_back(b.top());
            b.pop();
        }    
        for(int i=st.size()-1;i>=0;i--){
            new_string.push_back(st[i]);
        }
        return new_string;
    }
};
