class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>> set;
        vector<vector<int>> ans;
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                long sum=(long long)target-(long long)nums[i]-(long long)nums[j];
                int l=j+1;
                int h=n-1;
                while(l<h){
                    if(nums[l]+nums[h]<sum){
                        l++;
                    }
                    else if(nums[l]+nums[h]>sum){
                        h--;
                    }
                    else{
                        set.insert({nums[i],nums[j],nums[l],nums[h]});
                        l++;
                        h--;
                    }
                }
            }
        }
        for(auto it: set){
            ans.push_back(it);
        }
        return ans;
    }
};