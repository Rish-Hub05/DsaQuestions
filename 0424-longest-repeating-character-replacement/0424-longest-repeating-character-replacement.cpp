class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,ans=0,freq=0,r=0;
        int n=s.size();
        int hash[26]={0};
        for(int i=0;i<n;i++){
            hash[s[i]-'A']++;
            freq=max(freq,hash[s[i]-'A']);
            if((i-l+1)-freq>k){
                hash[s[l]-'A']--;
                l++;
            }
            ans=max(ans,i-l+1);
        }
        return ans;
    }
};