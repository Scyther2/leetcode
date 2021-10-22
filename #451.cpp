class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
        
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        
        priority_queue<pair<int,char>,vector<pair<int,char>>>p;
        
        for(auto it:m)
        {
            p.push(make_pair(it.second,it.first));
        }
        
        string ans="";
        while(!p.empty())
        {
            int a=p.top().first;
            char b=p.top().second;
            
            while(a--)
            {
                ans+=b;
            }
            
            p.pop();
        }
        
        return ans;
    }
};
