class Solution {
public:
void dfs(int row,int col,vector<vector<int>>& ans,vector<vector<char>>& mat,int drow[],int dcol[]){
    ans[row][col]=1;
    int n=mat.size();
        int m=mat[0].size();
    for(int i=0;i<4;i++){
        int nrow=row+drow[i];
        int ncol=col+dcol[i];
        if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !ans[nrow][ncol] && mat[nrow][ncol]=='O'){
            dfs(nrow,ncol,ans,mat,drow,dcol);
        }
    }
}
    void solve(vector<vector<char>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>> ans(n,vector<int>(m,0));
        int drow[4]={-1,0,1,0};
        int dcol[4]={0,1,0,-1};
        for(int j=0;j<m;j++){
            if(!ans[0][j] && mat[0][j]=='O'){
                dfs(0,j,ans,mat,drow,dcol);
            }
            if(!ans[n-1][j]&& mat[n-1][j]=='O'){
                dfs(n-1,j,ans,mat,drow,dcol);
            }
        }
        for(int i=0;i<n;i++){
            if(!ans[i][0] && mat[i][0]=='O'){
                dfs(i,0,ans,mat,drow,dcol);
            }
            if(!ans[i][m-1] && mat[i][m-1]=='O'){
                dfs(i,m-1,ans,mat,drow,dcol);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!ans[i][j] && mat[i][j]=='O')
                mat[i][j]='X';
            }
        }
    }
    
};