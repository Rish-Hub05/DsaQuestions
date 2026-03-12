class Solution {
public:
void f(vector<int>& nums,int idx,vector<vector<int>>& ans,vector<int>& a){
        
            ans.push_back(a);
        for(int i=idx;i<nums.size();i++){
            if(i!=idx && nums[i]==nums[i-1]) continue;
            a.push_back(nums[i]);
        f(nums,i+1,ans,a);
        a.pop_back();

        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> a;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        f(nums,0,ans,a);
        return ans;
    }
};