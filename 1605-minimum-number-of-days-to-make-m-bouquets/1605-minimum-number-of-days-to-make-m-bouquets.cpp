class Solution {
public:
    bool fun(vector<int>& bloomDay, int m, int k,int day){
        int total=0;
        for(int i=0;i<bloomDay.size();i++){
            int ct=0;
            while(i<bloomDay.size()&& ct<k && bloomDay[i]<=day){
                ct++;
                i++;
            }
            if(ct==k){
                total++;
                i--;
            }
            if(total>=m) return true;
        }
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m*k>bloomDay.size()) return -1;
        int low=1,high=1e9;
        while(low<high){
            int mid=low+(high-low)/2;
            if(fun(bloomDay,m,k,mid))high=mid;
            else
            low=mid+1;
        }
        return low;
    }
};
