class Solution {
public:
int fun(string s,int left,int right){
    while(left>=0 && right<s.length() && s[left]==s[right]){
        left--;
        right++;
    }
    return right-left-1;
}
    string longestPalindrome(string s) {
        int l=0,r=0;
        for(int i=0;i<s.size();i++){
            int l1=fun(s,i,i);
            int l2=fun(s,i,i+1);
            int len=max(l1,l2);
            if(len>r-l){
                l=i-(len-1)/2;
                r=i+len/2;
            }
        }
        return s.substr(l,r-l+1);
    }
};