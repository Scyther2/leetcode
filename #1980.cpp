class Solution {
public:
    void solve(int index,int size,string &temp,vector<string>&ans)
    {
        if(index==size)
        {
            ans.push_back(temp);
            return;
        }
        
        temp+='0';
        solve(index+1,size,temp,ans);
        temp.pop_back();
        
        temp+='1';
        solve(index+1,size,temp,ans);
        temp.pop_back();
    }
    string findDifferentBinaryString(vector<string>& nums) {
        
        unordered_map<string,int>m;
        
        for(auto child:nums)
        {
            m[child]++;
        }
        
        vector<string>ans;
        string temp="";
        
        int n=nums[0].size();
        
        solve(0,n,temp,ans);
        
        for(auto child:ans)
        {
            if(m.find(child)==m.end())
            {
                return child;
            }
        }
        
        return "";
        
    }
};
