class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int n=nums.size();
        int peakind=0;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[peakind])
            peakind=i;
        }
        long long ascsum=0;
        for(int i=0;i<=peakind;i++){
            ascsum+=nums[i];
        }
        long long dessum=0;
        for(int i=peakind;i<n;i++){
            dessum+=nums[i];
        }
        if(ascsum==dessum) return -1;
        else if(ascsum>dessum) return 0;
        else
        return 1;
    }
};