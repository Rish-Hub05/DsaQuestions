class Solution {
public:
    void f(int idx,int target,vector<int>& candidates,vector<vector<int>>& ans,vector<int>& a){
            if(target==0) {ans.push_back(a);
            return;
            }
        for(int i=idx;i<candidates.size();i++){
            if(i>idx&& candidates[i]==candidates[i-1])
            continue;
            if(candidates[i]>target)
            break;
            a.push_back(candidates[i]);
            f(i+1,target-candidates[i],candidates,ans,a);
            a.pop_back();

        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> a;
        f(0,target,candidates,ans,a);
        return ans;
    }
};