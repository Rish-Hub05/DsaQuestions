class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> ans;
        long long x=1;
        while(n>0){
            int r=n%10;
            if(r!=0)
            ans.insert(ans.begin(),(r*x));
            x=x*10;
            n=n/10;
        }
        return ans;
    }
};