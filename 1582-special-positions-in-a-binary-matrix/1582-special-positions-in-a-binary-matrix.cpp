class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<int> oner(n,0);
        vector<int> onec(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                oner[i]+=mat[i][j];
                onec[j]+=mat[i][j];
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==1 && oner[i]==1 && onec[j]==1) ans++;
            }
        }
        return ans;
    }
};