class Solution {
public:
void dfs(int node,vector<vector<int>>& isConnected,vector<int>& vis){
    vis[node]=1;
    int n=isConnected.size();
    for(int j=0;j<n;j++){
        if(isConnected[node][j]==1&& !vis[j])
        dfs(j,isConnected,vis);
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
            vector<int> vis(n,0);
            int cnt=0;
            for(int i=0;i<n;i++)
            if(!vis[i]){
                cnt++;
                dfs(i,isConnected,vis);
            }
            return cnt;
    }
};