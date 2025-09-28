class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1=0;
        int zero1=0;
        for(int i=0;i<nums1.size();i++){
            sum1+=nums1[i];
            if(nums1[i]==0)zero1++;
        }
        long long sum2=0;
        int zero2=0;
        for(int i=0;i<nums2.size();i++){
            sum2+=nums2[i];
            if(nums2[i]==0)zero2++;
        }
        if(zero1>0 && zero2>0){
            return max(sum1+zero1,sum2+zero2);
        }
        if(zero1==0&& zero2>0) {
            if(sum1>=sum2+zero2) return sum1;
            else return -1;
        }
        if(zero2==0&& zero1>0) {
            if(sum2>=sum1+zero1) return sum2;
            else return -1;
        }
        return (sum1==sum2)?sum1:-1;


    }
};