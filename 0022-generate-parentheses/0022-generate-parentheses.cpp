class Solution {
public:
    void f(int open,int close,vector<string>& ans,string str){
        if(open==0&&close==0){
            ans.push_back(str);
            return;
        }
        if(open>0){
            f(open-1,close,ans,str+"(");
        }
        if(close>0&& close>open) 
        f(open,close-1,ans,str+")");
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        f(n,n,ans,"");
        return ans;
    }
};