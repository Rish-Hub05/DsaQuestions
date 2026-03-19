class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int n=nums.size();
        long long sum=0;
        long long ans=0;
        int l=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            while(sum*(i-l+1)>=k){
                sum-=nums[l];
                l++;

            }
            ans+=(i-l+1);
        }
        return ans;
    }
};