class Solution {
public:
    int beautySum(string s) {
        int l = 0;
        for (int i = 0; i < s.size(); i++) {
            vector<int> hash(26, 0);
            for (int j = i; j < s.size(); j++) {
                hash[s[j] - 'a']++;
                int mx = 0, mn = INT_MAX;
for (int k = 0; k < 26; k++) {
    if (hash[k] > 0) {
        mx = max(mx, hash[k]);
        mn = min(mn, hash[k]);
    }
}
l += mx - mn;
            }
        }
        return l;
    }
};