class Solution {
public:
    void f(vector<vector<int>>& ans,vector<int>& a,int k,int target,int idx){

            if(target==0&&k==0) {
                ans.push_back(a);
                return;
            }
            if(target<0|| k<0) return;

        for(int i=idx;i<=9;i++){
            if(i>target || k<=0) break;
            a.push_back(i);
            f(ans,a,k-1,target-i,i+1);
            a.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> a;
        f(ans,a,k,n,1);
        return ans;
    }
};