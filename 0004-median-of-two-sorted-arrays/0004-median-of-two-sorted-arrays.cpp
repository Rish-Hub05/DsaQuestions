class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int l1=0,l2=0;
        int last=0;
        vector<int> a(n+m);
        while(l1<n&&l2<m){
            if(nums1[l1]<=nums2[l2]){
                a[last++]=nums1[l1++];
            }
            else{
                a[last++]=nums2[l2++];
            }
        }
        while(l1<n){
            a[last++]=nums1[l1++];
        }
        while(l2<m){
            a[last++]=nums2[l2++];
        }
        int x=n+m;
        return x%2 ? a[x/2]: (a[x/2]+a[x/2-1])/2.0;

    }
};