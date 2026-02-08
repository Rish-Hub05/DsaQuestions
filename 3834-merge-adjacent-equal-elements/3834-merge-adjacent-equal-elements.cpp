class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long> st;
        for(int n:nums){
            long long cur=1LL*n;
            while(!st.empty() && st.back()==cur){
                st.pop_back();
                cur*=2LL;
            }
            st.push_back(cur);
        }
        return st;
    }
};