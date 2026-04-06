class Solution {
public:
    int hammingWeight(int n) {
        bitset<32> b(n);
        string s=b.to_string();
        int ans=0;
        for(char c:s){
            if(c=='1') ans++;
        }
        return ans;
    }
};