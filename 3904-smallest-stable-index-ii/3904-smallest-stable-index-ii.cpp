class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> prefix(n);
        vector<int> suffix(n);
        prefix[0]=nums[0];
        suffix[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            prefix[i]=max(prefix[i-1],nums[i]);
        }
        for(int i=n-2;i>=0;i--){
            suffix[i]=min(nums[i],suffix[i+1]);
        }
        int ans=n;
        for(int i=0;i<n;i++){
            int sc=prefix[i]-suffix[i];
            if(sc<=k)
            ans=min(ans,i);
        }
        return ans==n?-1:ans;
    }
};