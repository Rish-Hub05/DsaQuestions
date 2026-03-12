class Solution {
public:
    void f(vector<int>& nums,int idx,vector<vector<int>>& ans,vector<int>& a){
        if(idx==nums.size()){
            ans.push_back(a);
            return;
        }
        a.push_back(nums[idx]);
        f(nums,idx+1,ans,a);
        a.pop_back();
        f(nums,idx+1,ans,a);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> a;
        int n=nums.size();
        f(nums,0,ans,a);
        return ans;

    }
};