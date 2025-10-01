class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(amount==0) return 0;
        int n=coins.size();
        queue<int> q;
        q.push(amount);
        vector<int> vis(amount+1,0);
        int ans=0;
        while(!q.empty()){
            int size=q.size();
            ans++;
            for(int i=0;i<size;i++){
                int node=q.front();
                q.pop();
                for(int j=n-1;j>=0;j--){
                    int next=node-coins[j];
                    if(next==0) return ans;
                    if(next<0) continue;
                    if(!vis[next]){
                        vis[next]=1;
                        q.push(next);
                    }
                }
            }
        }
        return -1;
    }
};