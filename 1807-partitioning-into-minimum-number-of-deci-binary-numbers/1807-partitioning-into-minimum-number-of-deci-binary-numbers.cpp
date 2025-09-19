class Solution {
public:
    int minPartitions(string n) {
       int maxi=0;
       for(char ca:n){
        maxi=max(maxi,ca-'0');
       }
       return maxi;
    }
};