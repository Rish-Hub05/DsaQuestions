class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        int i=path.size()-1;
        int skip=0;
        while(i>=0){
            while(i>=0 && path[i]=='/') i--;
            if(i<0) break;
            string d="";
            while(i>=0 && path[i]!='/'){
                d=path[i]+d;
                i--;
            }
            if(d==".")
            continue;
            else if(d=="..")
            skip++;
            else{
                if(skip>0){
                    skip--;
                }
                else{
                    st.push(d);
                }
            }
        }
        string ans="";
        while(!st.empty()){
            ans+="/"+st.top();
            st.pop();
        }
        return ans.empty()?"/":ans;
        
    }
};