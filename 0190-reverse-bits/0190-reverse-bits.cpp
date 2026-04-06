class Solution {
public:
    int reverseBits(int n) {
        bitset<32> b2(n);
        string s=b2.to_string();
        reverse(s.begin(),s.end());
        bitset<32> rev(s);           
        return (int)rev.to_ulong();
    }
};