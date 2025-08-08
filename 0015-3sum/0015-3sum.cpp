class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        vector<vector<int>> an;
        sort(a.begin(),a.end());
        int n=a.size();
        for(int i=0;i<n;i++){

        if(i!=0&&a[i]==a[i-1]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=a[i]+a[j]+a[k];
            if(sum<0)
            j++;
            else if(sum>0)
            k--;
            else{

            vector<int> t={a[i],a[j],a[k]};
            an.push_back(t);
            j++;
            k--;
            while (j<k && a[j]==a[j-1]) j++;
            while (j<k && a[k]==a[k+1]) k--;
            }
        }
        }
        return an;
    }
};