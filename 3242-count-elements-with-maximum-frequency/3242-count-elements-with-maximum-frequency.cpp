class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> frq;
        for(int num:nums) frq[num]++;
        int maxi=0;
        for(auto &k:frq){
            maxi=max(maxi,k.second);
        }
        int ans=0;
        for(auto &k:frq){
            if(k.second==maxi)ans+=k.second;
        }
        return ans;
    }
};