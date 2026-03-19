class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        long long pr=1;
        int n=nums.size();
        long long ans=0;
        int l=0;
        for(int r=0;r<n;r++){
            pr*=nums[r];
            while(pr>=k){
                pr=pr/nums[l];
                l++;
            }
            ans+=(r-l+1);
        }
        return ans;
    }
};