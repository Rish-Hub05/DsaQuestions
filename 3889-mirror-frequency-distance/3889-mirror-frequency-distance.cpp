class Solution {
public:
    int mirrorFrequency(string s) {
        vector<int> hash1(10,0),hash2(26,0);
        for(char c:s){
            if(c>='0' && c<='9')
            hash1[c-'0']++;
            else
            hash2[c-'a']++;
        }
        int ans=0;
        for(int i=0;i<5;i++)
        ans+=abs(hash1[i]-hash1[9-i]);
        for(int i=0;i<13;i++){
            ans+=abs(hash2[i]-hash2[25-i]);
        }
        return ans;
    }
};