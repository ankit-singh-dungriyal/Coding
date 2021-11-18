class Solution {
    public void swap(int[] nums, int i, int j){
        int x = nums[i];
        nums[i]=nums[j];
        nums[j]=x;
    }
    
    public List<Integer> findDisappearedNumbers(int[] nums) {
        int i=0,n=nums.length;
        while(i<n){
            while(nums[i]!=i+1){
                if(nums[nums[i]-1]==nums[i])break;
                swap(nums,i,nums[i]-1);
            }
            i++;
        }
        List<Integer> ans = new ArrayList<>();
        for(i=0;i<n;i++)
            if(nums[i]!=i+1)ans.add(i+1);
        return ans;
    }
}
