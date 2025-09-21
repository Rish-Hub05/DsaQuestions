class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        vector<int> a=nums;
        int maxi=nums[0], minu=nums[0];
        for(int x:nums){
            maxi=max(maxi,x);
            minu=min(minu,x);
        }
        
        return 1LL*(maxi-minu)*k;
    }
};
