class Solution {
public:
    int numSquares(int n) {
        queue<int> q;
        q.push(n);
        vector<int> vis(n+1,0);
        vis[n]=1;
        int ans=0;
        while(!q.empty()){
            int size=q.size();
            ans++;
            for(int i=0;i<size;i++){
                int node=q.front();
                q.pop();
                for(int j=1;j*j<=node;j++){
                    int next=node-j*j;
                    if(next==0) return ans;
                    if(!vis[next]){
                        vis[next]=1;
                        q.push(next);
                    }
                }
            }
        }
        return ans;
    }
};