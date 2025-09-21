class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int ans=0;
        bool found=false;
        for(int n:nums){
            if(n%2==0){
                ans|=n;
                found=true;
            }
        }
        return found?ans:0;
    }
};