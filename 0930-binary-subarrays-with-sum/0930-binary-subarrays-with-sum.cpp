class Solution {
public:
int f(vector<int>& nums,int goal){
    if(goal < 0) return 0;
        int n=nums.size();
        int l=0,r=0,ans=0;
        int cnt=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            while(sum>goal){
                sum-=nums[l];
                l++;
            }
            cnt+=(i-l+1);
        }
        return cnt;
}
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return (f(nums,goal)-f(nums,goal-1));
    }
};