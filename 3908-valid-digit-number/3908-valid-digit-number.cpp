class Solution {
public:
    bool validDigit(int n, int x) {
        string s=to_string(abs(n));
        bool ans=false;
        if(s[0]==x+'0') return false;
        for(char c:s){
            if(c==x+'0') return true;
        }
        return false;
    }
};