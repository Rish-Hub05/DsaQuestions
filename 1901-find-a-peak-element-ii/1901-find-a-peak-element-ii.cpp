class Solution {
public:
int fun(vector<vector<int>> arr, int c){
    int n=arr.size();
        int m=arr[0].size();
        int index=-1;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i][c]>maxi){
                maxi=arr[i][c];
                index=i;
            }
        }
        return index;
}
    vector<int> findPeakGrid(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        int low=0,high=m-1;
        while(low<=high){
            int mid=(low+high)/2;
            int row=fun(arr,mid);
            int left=mid-1>=0?arr[row][mid-1]:INT_MIN;
            int right=mid+1<m?arr[row][mid+1]:INT_MIN;
            if(arr[row][mid]>left && arr[row][mid]>right){
                return {row,mid};
            }
            else if(left>arr[row][mid]) high=mid-1;
            else low=mid+1;
        }
        return {-1,-1};
    }
};