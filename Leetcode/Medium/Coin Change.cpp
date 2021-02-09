class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int INF=100005;
        vector<int>dp(amount+1,INF);
        dp[0]=0;
        int m=coins.size();
        for(int i=1;i<=amount;i++){
            for(int j=0;j<m;j++){
                if(i-coins[j]>=0 && dp[i-coins[j]]!=INF)dp[i]=min(dp[i],dp[i-coins[j]]+1);
            }
        }
        if(dp[amount]==INF)return -1;
        return dp[amount];
    }
};
