class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        vector<int>l_min(n),r_max(n);
        l_min[0]=nums[0];
        r_max[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            l_min[i]=min(l_min[i-1],nums[i]);
            r_max[n-i-1]=max(r_max[n-i],nums[n-i-1]);
        }

        for(int i=0;i<n;i++)if(nums[i]>l_min[i] && nums[i]<r_max[i])return true;
        return false;
    }
};
