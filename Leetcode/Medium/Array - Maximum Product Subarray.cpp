class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if(!n)return 0;
        int a=nums[0],b=nums[0],ans=nums[0];
        for(int i=1;i<n;i++){
            int x=a*nums[i],y=b*nums[i];
            a=max(nums[i],max(x,y));
            b=min(nums[i],min(x,y));
            ans=max(ans,a);
        }
        return ans;
    }
};
