class Solution {
public:
    bool f(int n,int target,vector<int>& nums){
        vector<bool> prev(target+1,0),curr(target+1,0);
        prev[0]=curr[0]=true;if(nums[0] <= target)
    prev[nums[0]] = true;

        for(int ind = 1;ind<n; ind++) {
            for(int t = 1;t <= target;t++) {
                bool notTake = prev[t];
                bool take = false;
                if(nums[ind] <= t) take = prev[t-nums[ind]];
                curr[t] = take | notTake;
            }
            prev=curr;
        }
        return prev[target];
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum%2) return false;
        int target=sum/2;
        return f(n,target,nums);
        
    }
};