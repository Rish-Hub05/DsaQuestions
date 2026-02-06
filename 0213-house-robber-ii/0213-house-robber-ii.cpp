class Solution {
public:
int f(vector<int>& a){
    int n=a.size();
    if(n==0) return 0;
    if(n==1) return a[0];
    int prev=a[0];
    int prev2=0;
    for(int i=1;i<n;i++){
        int taken=a[i]+prev2;
        int noti=prev;
        int cur=max(taken,noti);
        prev2=prev;
        prev=cur;
    }
    return prev;
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        if(n==1) return nums[0];
        vector<int> arr1, arr2;
        for(int i=0;i<n;i++){
            if(i!=0) arr1.push_back(nums[i]);
            if(i!=n-1) arr2.push_back(nums[i]);
        }
        int x=f(arr1);
        int y=f(arr2);
        return max(x,y);
    }
};