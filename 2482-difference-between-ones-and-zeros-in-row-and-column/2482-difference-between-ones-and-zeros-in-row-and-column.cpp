class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> ans(n,vector<int>(m,0));
        vector<int> oner(n,0);
        vector<int> onec(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                oner[i]+=grid[i][j];
                onec[j]+=grid[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans[i][j]=oner[i]+onec[j]-(n-oner[i])-(m-onec[j]);
            }
        }
        return ans;
    }
};