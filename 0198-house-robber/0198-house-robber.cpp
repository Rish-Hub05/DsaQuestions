class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int prev=nums[0];
        int prev2=0;
        int cur=0;
        for(int i=1;i<n;i++){
            int taken=nums[i];
            if(i>1) taken+=prev2;
            int noti=prev;
            cur=max(taken,noti);
            prev2=prev;
            prev=cur;
        }
        return prev;
    }
};