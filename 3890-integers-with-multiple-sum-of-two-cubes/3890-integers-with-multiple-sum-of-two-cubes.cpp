class Solution {
public:
    vector<int> findGoodIntegers(int n) {
        unordered_map<int,int> mp;
        int l=cbrt(n);
        for(int i=1;i<=l;i++){
            for(int j=i;j<=l;j++){
                long long sum=1LL*i*i*i+1LL*j*j*j;
                if(sum>n) break;
                mp[sum]++;
            }
        }
        vector<int> ans;
        for(auto it:mp){
            if(it.second>=2){
                ans.push_back(it.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};