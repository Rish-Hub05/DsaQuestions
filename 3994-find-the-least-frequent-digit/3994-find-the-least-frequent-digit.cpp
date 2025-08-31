class Solution {
public:
    int getLeastFrequentDigit(int n) {
        vector<int> f(10,0);
        while(n>0){
            int d=n%10;
            f[d]++;
            n=n/10;
        }
        int ans=-1,minu=INT_MAX;
        for(int d=0;d<=9;d++){
            if(f[d]>0){
                if(f[d]<minu||(f[d]==minu&&d<ans)){
                    minu=f[d];
                    ans=d;
                }
            }
        }
        return ans;
    }
};