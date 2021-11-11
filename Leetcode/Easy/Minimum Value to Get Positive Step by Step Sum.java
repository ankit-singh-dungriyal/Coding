class Solution {
    public int minStartValue(int[] nums) {
        int ans = nums[0];
        for(int i=1;i<nums.length;i++){
            nums[i]+=nums[i-1];
            ans=Math.min(ans,nums[i]);
        }
        return Math.max(-ans+1,1);
    }
}
