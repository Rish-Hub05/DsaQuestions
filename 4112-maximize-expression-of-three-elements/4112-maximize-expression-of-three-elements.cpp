class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=nums[nums.size()-1];
        int b=nums[nums.size()-2];
        int c=nums[0];
        return a+b-c;
    }
};