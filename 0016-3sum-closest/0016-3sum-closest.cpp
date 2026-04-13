class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
        int ans=nums[0]+nums[1]+nums[2];
        int l=0,r=n-1;
        for(int i=0;i<n-2;i++){
            int l=i+1,r=n-1;
            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];
                if(abs(sum-target)<abs(target-ans))
                ans=sum;
                if(sum==target) return target;
                else if(sum<target) l++;
                else r--;
            }
        }
        return ans;
        
    }
};