class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        stack<int> st;
        int n=ast.size();
        for(int i=0;i<n;i++){
            if(ast[i]>0) st.push(ast[i]);
            else{
                while(!st.empty() &&st.top()>0 &&st.top()<-ast[i])
                    st.pop();
                if(st.empty() || st.top() <0)
                    st.push(ast[i]);
                if(!st.empty() && st.top()==-ast[i])
                    st.pop();
            }
        }
        int x=st.size();
        vector<int> ans(x);
        while(!st.empty()){
            ans[--x]= st.top();
            st.pop();
        }
        return ans;
    }
};