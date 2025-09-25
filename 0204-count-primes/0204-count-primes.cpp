class Solution {
public:

    int countPrimes(int n) {
        if(n<=2) return 0;
        vector<bool> arr(n,true);
        arr[0]=arr[1]=false;
        int ans=1;
        for(int i=3;i*i<n;i+=2){
            if(arr[i]){
                for(int j=i*i;j<n;j+=2*i){
                    arr[j]=false;
                }
            }
        }
        for(int i=3;i<n;i+=2){
            if(arr[i]) ans++;
        }
        return ans;
    }
};