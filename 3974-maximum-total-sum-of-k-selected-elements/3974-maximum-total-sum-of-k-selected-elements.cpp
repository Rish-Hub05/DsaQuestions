class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(),nums.end());
        long long ans=0;
        int n=nums.size();
        for(int i=n-1;i>=n-k;i--){
            ans+=1LL*nums[i]*mul;
            mul=max(1,mul-1);
        }
        return ans;
    }

};