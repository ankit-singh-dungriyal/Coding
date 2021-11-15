class Solution {
    public List<Integer> largestDivisibleSubset(int[] nums) {
        Arrays.sort(nums);
        int n= nums.length;
        int[] dp = new int[n];
        int[] pos = new int[n];
        dp[0]=1;
        pos[0]=-1;
        for(int i=1;i<n;i++){
            dp[i]=1;
            pos[i]=-1;
            for(int j=0;j<i;j++)
                if(nums[i]%nums[j]==0){
                    if(dp[j]>=dp[i]){
                        dp[i]=dp[j]+1;
                        pos[i]=j;
                    }
                }
        }
        int max_pos = 0, max=1;
        for(int i=0;i<n;i++)
            if(dp[i]>max){
                max=dp[i];
                max_pos=i;
            }
        
        List<Integer>ans = new ArrayList<>();
        while(max_pos!=-1){
            ans.add(nums[max_pos]);
            max_pos=pos[max_pos];
        }
        return ans;
        
    }
}
