class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>> ans(n, vector<int>(m, -1));
        queue<pair<int,int>> q;
        int dist=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    ans[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        int drow[4]={-1,0,1,0};
        int dcol[4]={0,1,0,-1};
        while(!q.empty()){
            auto [r,c]=q.front();
            q.pop();
            for(int k=0;k<4;k++){
                int nrow=r+drow[k];
                int ncol=c+dcol[k];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && ans[nrow][ncol]==-1){
                    ans[nrow][ncol]=ans[r][c]+1;
                    q.push({nrow,ncol});
                }
            }
        }
        return ans;
    }
};