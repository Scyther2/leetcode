class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>m;
        
        for(int i=0;i<jewels.size();i++)
        {
            m[jewels[i]]++;
        }
        
        int ans=0;
        
        for(int i=0;i<stones.size();i++)
        {
            auto it=m.find(stones[i]);
            if(it!=m.end())
            {
                ans++;
            }
        }
        
        return ans;
    }
};
