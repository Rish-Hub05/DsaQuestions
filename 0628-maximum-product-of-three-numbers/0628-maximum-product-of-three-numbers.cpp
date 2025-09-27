class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        long long f=INT_MIN, s=INT_MIN, t=INT_MIN;
        long long minu1=INT_MAX, minu2=INT_MAX;
        for(auto it:nums){
            if(it>f){
                t=s;
                s=f;
                f=it;
            }
            else if(it>s){
                t=s;
                s=it;
            }
            else if(it>t){
                t=it;
            }
            if(it<minu1){
                minu2=minu1;
                minu1=it;
            }
            else if(it<minu2){
                minu2=it;
            }
            
        }
        return max(f*s*t,f*minu1*minu2);
    }
};