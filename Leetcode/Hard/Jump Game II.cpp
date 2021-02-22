class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,INT_MAX);
        dp[0]=0;
        for(int i=0;i<n;i++){
            for(int j=min(n-1,i+nums[i]);j>i;j--){
                if(dp[j]>dp[i]+1)dp[j]=dp[i]+1;
                else break;
            }
        }
        return dp[n-1];
    }
};
