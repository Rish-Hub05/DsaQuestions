class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int x=0,y=n;
        vector<int> ans(2*n);
        int i=0;
        while(y<2*n){
            ans[i++]=nums[x++];
            ans[i++]=nums[y++];
        }
        return ans;
    }
};