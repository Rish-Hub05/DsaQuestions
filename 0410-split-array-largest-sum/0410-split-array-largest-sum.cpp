class Solution {
public:
bool fun(vector<int> nums,int maxi,int k){
    int cnt=1;
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(sum>maxi){
            cnt++;
            sum=nums[i];
            if(cnt>k) return false;
        }
        
    }
    return true;
}
    int splitArray(vector<int>& nums, int k) {
        int totalways=ceil(nums.size()/k);
        int low=0,high=0;
        for(int i=0;i<nums.size();i++){
            low=max(low,nums[i]);
            high+=nums[i];
        }
        int a=high;
        while(low<=high){
            int mid=(low+high)/2;
            if(fun(nums,mid,k)){
                a=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return a;
    }
};