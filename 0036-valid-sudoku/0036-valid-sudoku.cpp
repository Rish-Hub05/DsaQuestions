class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            unordered_set<int> rrow,col;
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    if(rrow.count(board[i][j])) return false;
                    rrow.insert(board[i][j]);
                }
                if(board[j][i]!='.'){
                    if(col.count(board[j][i])) return false;
                    col.insert(board[j][i]);
                }
            }
        }
        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                unordered_set<char> box;
                for(int k=0;k<3;k++){
                    for(int l=0;l<3;l++){
                        char c=board[i+k][j+l];
                        if(c!='.'){
                            if(box.count(c)) return false;
                            box.insert(c);
                        }
                    }
                }
            }
        }
        return true;
    }
};