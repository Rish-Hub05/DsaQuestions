class Solution {
public:
    int maxArea(vector<int>& height) {
        int vol=INT_MIN;
        int n=height.size();
        int left=0,right=n-1;
        while(left<right){
            int h=min(height[left],height[right]);
            int v=h*(right-left);
            vol=max(vol,v);
            if(height[left]<height[right])
            left++;
            else
            right--;
        }
        return vol;
    }
};