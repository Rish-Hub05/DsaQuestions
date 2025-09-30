class Solution {
public:
    void dfs(vector<vector<char>>& grid,vector<vector<int>>& vis,int r,int c,int m,int n){
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nrow=r+drow[i];
            int ncol=c+dcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1'&& !vis[nrow][ncol] ){
                vis[nrow][ncol]=1;
            dfs(grid,vis,nrow,ncol,m,n);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && vis[i][j]==0)
                {
                    cnt++;
                    vis[i][j]=1;
                    dfs(grid, vis, i, j, m, n);
                }
            }
        }
        return cnt;

    }
};