class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0,j=n-1;
        while(i<=j){
            while(i<j&& nums[i]==nums[i+1])i++;
            while(i<j && nums[j]==nums[j-1])j--;
            int m=(i+j)/2;
            if(nums[m]==target)return true;
            else if(nums[i]<=nums[m]){
                if(target>=nums[i]&& target<=nums[m])j=m-1;
                else i=m+1;
            }
            else {
                if(target>=nums[m]&&target<=nums[j])i=m+1;
                else j=m-1;
            }
        }
        return false;
    }
};
