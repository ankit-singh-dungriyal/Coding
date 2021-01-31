class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int i=0,l=0,h=n-1;
        while(i<=h){
            if(nums[i]==0)swap(nums[i++],nums[l++]);
            else if(nums[i]==1)i++;
            else swap(nums[i],nums[h--]);
        }
    }
};
