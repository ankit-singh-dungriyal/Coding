class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        Arrays.sort(nums);
        List<List<Integer>> ans = new LinkedList<>();
        int n= nums.length;
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            int j=i+1;
            int k=n-1;
            while(j<k){
                int tmp = nums[i]+nums[j]+nums[k];
                if(tmp>0)k--;
                else if(tmp<0)j++;
                else {
                    ans.add(Arrays.asList(nums[i],nums[j],nums[k]));                   
                    while(j<k && nums[j]==nums[j+1])j++;
                    while(j<k && nums[k]==nums[k-1])k--;
                    j++;
                    k--;
                }
            }
        }
        return ans;
    }
}
