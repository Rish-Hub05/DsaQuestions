class Solution {
public:
    int firstMatchingIndex(string s) {
        int n=s.size();
        int l=0,r=n-1;
        while(l<=r){
            if(s[l]==s[r])
            return l;
            l++;
            r--;
        }
        return -1;
    }
};