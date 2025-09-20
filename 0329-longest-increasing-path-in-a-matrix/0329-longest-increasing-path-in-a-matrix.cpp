class Solution {
public:
int dfs(int row,int col,vector<vector<int>>& matrix,vector<vector<int>>& vis,int drow[],int dcol[]){
    int maxi=1;
    int n=matrix.size();
        int m=matrix[0].size();
    if(vis[row][col]!=-1) return vis[row][col];
    for(int i=0;i<4;i++){
        int nrow=row+drow[i];
        int ncol=col+dcol[i];
        if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && matrix[nrow][ncol]>matrix[row][col]){
            maxi=max(maxi,1+dfs(nrow,ncol,matrix,vis,drow,dcol));
        }
    }
    return vis[row][col]=maxi;
}
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int maxi=0;
        int drow[4]={-1,0,1,0};
        int dcol[4]={0,1,0,-1};
        vector<vector<int>> vis(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int cmp=dfs(i,j,matrix,vis,drow,dcol);
                maxi=max(maxi,cmp);
            }
        }
        return maxi;
    }
};