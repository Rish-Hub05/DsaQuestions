class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> pos;
        for(auto it:nums){
            if(it>=0) pos.push_back(it);
        }
        int m=pos.size();
        if(m==0) return nums;
        k=k%m;
        vector<int> copy(m);
        for(int i=0;i<m;i++){
            int posi=i-k;
            if(posi<0) posi+=m;
            copy[posi]=pos[i];
        }
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                nums[i]=copy[j++];
            }
        }
        return nums;
        
    }
};