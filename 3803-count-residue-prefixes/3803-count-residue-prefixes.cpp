class Solution {
public:
    int residuePrefixes(string s) {
        int ans=0;
        map<int,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            if((i+1)%3==mp.size()) ans++;
        }
        return ans;
    }
};