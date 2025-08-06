class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> p;
        for(int i=0;i<numRows;i++){
            vector<int> rw(i+1,1);
            for(int j=1;j<i;j++){
                rw[j] = p[i-1][j-1]+p[i-1][j];
            }
            p.push_back(rw);
        }
        return p;
    }
};