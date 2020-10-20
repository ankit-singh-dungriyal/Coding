class Solution {
public:
    bool canJump(vector<int>& nums) {
        int p=0;
        int n=nums.size();
        int i=0;
        for(;i<n;){
            p=max(p,i+nums[i]);
            if(p>i)i++;
            else break;
        }
        return((i>=n-1)?true:false);
    }
};
