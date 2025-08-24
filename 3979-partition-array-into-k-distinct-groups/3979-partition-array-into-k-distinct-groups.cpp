class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        int n=nums.size();
        if(n%k!=0) return false;
        unordered_map<int ,int> freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        int maxi=0;
        for(auto &p: freq){
            maxi=max(maxi,p.second);
        }
        int g=n/k;
        return maxi<=g;
    }
};