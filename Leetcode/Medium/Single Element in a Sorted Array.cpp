class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=n-1;
        while(i<j){
            int m=(i+j)/2;
            if(m&1 && nums[m]==nums[m-1]|| !(m&1) && nums[m]==nums[m+1])i=m+1;
            else j=m;
        }
        return nums[i];
    }
};
