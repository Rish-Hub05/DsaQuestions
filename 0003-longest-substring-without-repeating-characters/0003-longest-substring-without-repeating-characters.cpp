class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> h(256,-1);
        int n=s.size();
        int l=0,r=0,ans=0;
        while(r<n){
            if(h[s[r]]>=l)
            l=h[s[r]]+1;
            ans=max(ans,(r-l+1));
            h[s[r]]=r;
            r++;
        }
        return ans;
    }
};