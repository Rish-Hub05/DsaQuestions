class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int maxrng=-1;
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int x=nums[i];
            int maxi=0,mini=9;
            while(x>0){
                int d=x%10;
                maxi=max(maxi,d);
                mini=min(mini,d);
                x=x/10;
            }
            int rng=maxi-mini;
            if(rng>maxrng){
                maxrng=rng;
                sum=nums[i];
            }
            else if(rng==maxrng){
                sum+=nums[i];
            }
        }
        return sum;
    }
};