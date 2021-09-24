class StockSpanner {
    stack<pair<int,int>>stk;
    int count=0;
    
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        int val;
        while(!stk.empty() && price>=stk.top().first)
        {
            stk.pop();
        }
        if(stk.empty())
        {
            val=count+1;
        }
        else
        {
            val=count-stk.top().second;
        }
        stk.push(make_pair(price,count));
        count++;
        
        return val;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
