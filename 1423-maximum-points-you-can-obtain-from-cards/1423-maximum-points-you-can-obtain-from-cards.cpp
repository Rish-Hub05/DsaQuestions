class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int n=arr.size();
        if(n==0) return 0;
        int lsum=0,rsum=0;
        int ans=INT_MIN;
        for(int i=0;i<k;i++) {
            lsum+=arr[i];
        }
        ans=lsum;
        int r=n-1;
        for(int i=k-1;i>=0;i--){
            lsum=lsum-arr[i];
            rsum=rsum+arr[r];
            r--;
            ans=max(ans,lsum+rsum);
        }
        return ans;
    }
};