class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int n=s.length();
        string ans="";
        for(int i=0;i<n;i++){
            string w="";
            while(i<n&&s[i]!=' '){
                w+=s[i];
                i++;
            }
            reverse(w.begin(),w.end());
            if(w.size()>0) ans+=" "+w;
        }
        return ans.substr(1);
    }
};