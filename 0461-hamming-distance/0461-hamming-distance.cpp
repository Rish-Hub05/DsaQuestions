
class Solution {
public:
    int hammingDistance(int x, int y) {
        int xori=x^y;
        int cnt=0;
        while(xori){
            cnt+=xori&1;
            xori>>=1;
        }
        return cnt;
    }
};