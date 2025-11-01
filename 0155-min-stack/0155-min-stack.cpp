class MinStack {
    stack<int> st;
    stack<int> minu;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(minu.empty() || minu.top()>=val)
        minu.push(val);
    }
    
    void pop() {
        if(st.top()==minu.top())
        minu.pop();
        st.pop();
    }
    
    int top() {
        return st.top();    
    }
    
    int getMin() {
        return minu.top();
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