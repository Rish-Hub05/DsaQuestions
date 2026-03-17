class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0,r=0,ans=0;
        int x=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)
            x++;
            while(x>k){
                if(nums[l]==0) x--;
                l++;
            }
            
            ans=max(ans,(i-l+1));
        }
        return ans;
    }
};