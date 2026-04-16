class Solution {
public:
bool dfs(vector<vector<char>>& board,int i,int j,int id,string& word,int n,int m){
    if(id==word.size()) return true;
    if(i<0||j<0||i>=n||j>=m||board[i][j]=='#')
    return false;
    if(board[i][j]!=word[id]) return false;
    char temp=board[i][j];
    board[i][j]='#';
    int drow[4]={1,-1,0,0};
    int dcol[4]={0,0,1,-1};
    for(int k=0;k<4;k++){
        int ni=i+drow[k];
        int nj=j+dcol[k];
        if(dfs(board,ni,nj,id+1,word,n,m))
        return true;
    }
    board[i][j]=temp;
    return false;
}
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0] && dfs(board,i,j,0,word,n,m))
                return true;
            }
        }
        return false;
    }
};