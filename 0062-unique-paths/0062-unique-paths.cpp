class Solution {
public:
    vector<vector<int>> dp;
    int f(int m,int n){
        if(m==0&&n==0) return 1;
        if(m<0 || n<0) return 0;
        if(dp[m][n]!=-1) return dp[m][n];
        int up=f(m-1,n);
        int left=f(m,n-1);
        return dp[m][n]=up+left;
    }
    int uniquePaths(int m, int n) {
        dp.assign(m, vector<int>(n, -1));
        return f(m-1,n-1);
    }
};