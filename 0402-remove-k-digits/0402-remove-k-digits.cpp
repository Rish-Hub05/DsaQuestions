class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        int n=num.length();
        for(int i=0;i<n;i++){
            while(!st.empty() &&k>0&& st.top()>num[i]){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(k>0 && !st.empty()){
            st.pop();
            k--;
        }
        int x=st.size();
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        
        while(ans[0]=='0'&& !ans.empty()){
            ans.erase(0,1);
        }
        if(ans.empty()) return "0";
        return ans;
    }
};