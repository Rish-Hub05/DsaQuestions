class MinStack {
public:
stack<long long> st;
long long minu=INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            minu=val;
            st.push(val);
        }
        else{
            if(val>minu) st.push(val);
            else{
                st.push(2LL*val-minu);
                minu=val;
            }
        }
    }
    
    void pop() {
        if (st.empty()) return;
        long long x=st.top();
        st.pop();
        if(x<minu){
            minu=2LL*minu-x;
        }
    }
    
    int top() {
        if(st.empty()) return -1;
        long long x=st.top();
        if(x>minu) return x;
        else return minu;
    }
    
    int getMin() {
        if(st.empty()) return -1;
        return minu;
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