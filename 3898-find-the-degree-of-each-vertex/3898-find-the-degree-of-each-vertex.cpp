class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int x=0;
            for(int j=0;j<n;j++){

            x+=matrix[i][j];
            }
            ans.push_back(x);
        }
        return ans;
    }
};