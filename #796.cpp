class Solution {
public:
    bool rotateString(string s, string goal) {
        
        string temp="";
        
        temp+=s;
        
        temp+=s;
        
        if(s.size()!=goal.size())
        {
            return false;
        }
        
        
        int Size=goal.size();
        
        int l=0,r=Size-1;
        
        while(r<temp.size())
        {
            string s2=temp.substr(l,Size);
            if(s2==goal)
            {
                return true;
            }
            l++;
            r++;
        }
        
        return false;
        
        
        
    }
};
