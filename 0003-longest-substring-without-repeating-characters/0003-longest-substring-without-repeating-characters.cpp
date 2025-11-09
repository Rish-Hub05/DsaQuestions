class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi=INT_MIN;
        vector<int> hs(255);
        if(s.size()==0) return 0;
        for(int i=0;i<s.size();i++){
            fill(hs.begin(),hs.end(),0);
            for(int j=i;j<s.size();j++){
                if(hs[s[j]]==1) break;
                
                maxi=max(maxi,j-i+1);
                hs[s[j]]=1;
            }
        }
        return maxi;
    }
};