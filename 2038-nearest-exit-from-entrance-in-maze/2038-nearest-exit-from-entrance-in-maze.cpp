class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& ent) {
        int m=maze.size();
        int n=maze[0].size();
        queue<pair<int,int>> q;
        q.push({ent[0],ent[1]});
        maze[ent[0]][ent[1]] = '+';
        int steps=0;
        vector<vector<int>> d={{1,0},{-1,0},{0,1},{0,-1}};
        while(!q.empty()){
            int sz=q.size();
            steps++;
            for(int i=0;i<sz;i++){
                auto [r, c] = q.front(); q.pop();
                for(auto &d : d) {
                    int nr = r + d[0], nc = c + d[1];
                    if(nr>=0&&nr<m&&nc>=0 && nc<n && maze[nr][nc]=='.'){
                        if(nr==0 || nr==m-1 || nc==0 || nc==n-1){
                            return steps;
                        }
                        maze[nr][nc]='+';
                        q.push({nr,nc});
                    }
                }
            }
        }
        return -1;
    }
};