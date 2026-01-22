class Solution {
public:
    vector<int> NSE(vector<int> &arr){
        int n=arr.size();
        vector<int> aaa(n);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            aaa[i]=!st.empty()?st.top():n;
            st.push(i);
        }
        return aaa;
    }
    vector<int> PSEE(vector<int> &arr){
        int n=arr.size();
        vector<int> aaa(n);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }
            aaa[i]=!st.empty()?st.top():-1;
            st.push(i);
        }
        return aaa;
    }
    int sumSubarrayMins(vector<int>& arr) {
        vector<int> nse=NSE(arr);
        vector<int> psee=PSEE(arr);
        int n=arr.size(),mod=(int)(1e9+7);
        int sum=0;
        for(int i=0;i<n;i++){
            int left=i-psee[i];
            int right=nse[i]-i;
            long long f=left*right*1LL;
            int val=(f*arr[i]*1LL)%mod;
            sum=(sum+val)%mod;

        }
        return sum;
    }
};