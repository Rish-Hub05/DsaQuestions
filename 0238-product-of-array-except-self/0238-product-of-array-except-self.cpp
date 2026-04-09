class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long p=1;
        int zero=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) {
                zero++; 
                continue;
            }
            else
            p=p*nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(zero>1) nums[i]=0;
            else if(zero==1){
                nums[i]=(nums[i]==0)?p:0;
            }
            else{
                nums[i]=p/nums[i];
            }
        }
        return nums;
    }
};