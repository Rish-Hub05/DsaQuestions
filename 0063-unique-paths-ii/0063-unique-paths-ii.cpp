class Solution {
public:
    vector<vector<int>> dp;
    int f(int n, int m,vector<vector<int>>& arr){
        if(m<0 || n<0) return 0;
        if(arr[n][m]==1) return 0;
        if(m==0 && n==0) return 1;
        if(dp[n][m]!=-1) return dp[n][m];
        
       int up=f(n-1,m, arr);
       int left=f(n,m-1 ,arr);
        return dp[n][m]=up+left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        dp.assign(n, vector<int>(m, -1));
        return f(n-1,m-1,arr);
    }
};