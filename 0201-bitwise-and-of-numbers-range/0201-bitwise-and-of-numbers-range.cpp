class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        // int ans=left;
        // for(int i=left;i<=right;i++){
        //     ans=i&ans;
        // }
        // return ans;
        // this gives tle
        //below is kernighan trick
        while(right>left){
            right=right&(right-1);
        }
        return right;
    }
};