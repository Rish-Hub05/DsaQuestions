class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxi=0, maxDiag = 0;

        for (int i=0;i<dimensions.size();i++) {
            int l=dimensions[i][0];
            int w=dimensions[i][1];
            int currDiag=l*l+w*w;

            if (currDiag>maxDiag || (currDiag==maxDiag && l*w>maxi)) {
                maxDiag=currDiag;
                maxi=l*w;
            }
        }
        return maxi;
    }
};