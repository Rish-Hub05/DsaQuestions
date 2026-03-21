class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.size();
        string ans;
        int d=0;
        for(char c:s){
            if(c=='('){
                if(d>0) ans.push_back(c);
                d++;
            }
            else{
                d--;
                if(d>0) ans.push_back(c);
            }
        }
        return ans;
    }
};