class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n=nums.size();
        float avg=nums[n-1];
        int l=1;
        int ans=0;
        for(int i=n-2;i>=0;i--){
            if(avg<nums[i]) ans++;
            avg=(avg*l+nums[i])/(++l);
            
        }
        return ans;
    }
};