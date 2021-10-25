class MinStack {
private:
    
public:
    
    vector<int>v;
    vector<int>min;
    MinStack() {
        
        min.push_back(INT_MAX);
    }
    
    void push(int val) {
        v.push_back(val);
        if(val<=min[min.size()-1])
        {
            min.push_back(val);
        }
       
    }
    
    void pop() {
        if(v[v.size()-1]==min[min.size()-1])
        min.pop_back();
        v.pop_back();
    }
    
    int top() {
        return v[v.size()-1];
    }
    
    int getMin() {
        return min[min.size()-1];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
