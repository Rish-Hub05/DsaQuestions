class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        if(n!=goal.size()) return false;
        for(int i=0;i<n;i++){
            int x=i,j=0;
            while(j<n&&s[x]==goal[j]){
                x=(x+1)%n;
                j++;
            }
            if(j==n) return true;
        }
        return false;
    }
};