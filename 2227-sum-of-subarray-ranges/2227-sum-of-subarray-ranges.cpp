class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int maxi=nums[i];
            int minu=nums[i];
            for(int j=i;j<n;j++){
                maxi=max(maxi,nums[j]);
                minu=min(minu,nums[j]);
                ans+=maxi-minu;
            }
        }
        return ans;
    }
};