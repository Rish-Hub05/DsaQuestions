class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        string p=strs[0];
        int plen=p.length();
        for (int i=1;i<strs.size();i++){
            string s=strs[i];
            while(plen>s.length()||p!=s.substr(0,plen)) {
                plen--;
                if(plen == 0) {
                    return "";
                }
                p = p.substr(0, plen);
            }
        }

        return p; 
    }
};