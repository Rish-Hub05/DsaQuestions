class Solution {
public:
    int maxDepth(string s) {
        int d=0;
        int ans=0;
        for(char c:s){
            if(c=='('){
             d++;
            ans=max(d,ans);
            }
            else if(c==')') d--;
        }
        return ans;
    }
};