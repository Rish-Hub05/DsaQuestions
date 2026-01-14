class Solution {
public:
int fun(int x,int k,int index){
    return abs(index-(x-1));
}
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int low=0,high=n-1;
        int x;
        while(low<=high){
            int mid=low+(high-low)/2;
            int l=arr[mid]-(mid+1);
            if(l<k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }

        }
        return low+k;
    }
};