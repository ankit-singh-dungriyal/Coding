class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p=1,cn=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1])cn++;
            else cn=1;
            if(cn<=2){
                nums[p]=nums[i];
                p++;            
            }
        }
        int k=nums.size();
        while(k>p)nums.pop_back(),k--;
        return nums.size();
    }
};
