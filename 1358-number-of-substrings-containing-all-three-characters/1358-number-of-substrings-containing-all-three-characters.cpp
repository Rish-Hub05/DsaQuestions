class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        vector<int> h(3,0);
        int l=0,r=0,cnt=0;
        while(r<n){
            h[s[r]-'a']++;
            while(h[0]>0 && h[1]>0 && h[2]>0){
                cnt+=n-r;
                h[s[l]-'a']--;
                l++;
            }
            r++;
        }
        return cnt;
    }
};