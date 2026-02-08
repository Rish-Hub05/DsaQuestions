class Solution {
public:
vector<vector<int>> dp;
int sum=INT_MAX;
    int f(int n, int m,vector<vector<int>>& arr){
        if(m<0 || n<0) return 1e9;
        if(m==0 && n==0) return arr[0][0];
        if(dp[n][m]!=-1) return dp[n][m];
       int up=f(n-1,m, arr);
       int left=f(n,m-1 ,arr);
        return dp[n][m]=arr[n][m]+min(up,left);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        dp.assign(n, vector<int>(m, -1));
        return f(n-1,m-1,grid);
    }
};