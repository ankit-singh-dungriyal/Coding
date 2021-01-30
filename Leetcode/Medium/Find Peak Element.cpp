class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return 0;
        if(nums[0]>nums[1])return 0;
        if(nums[n-1]>nums[n-2])return n-1;
        int i=1,j=n-2;
        while(i<=j){
            int m=(i+j)/2;
            if(nums[m]>nums[m+1]&& nums[m]>nums[m-1])return m;
            else if(nums[m]>nums[m+1])j=m-1;
            else i=m+1;
        }
        return j;
    }
};
