class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int>dp(366,0);
        dp[0]=0;
        for(auto x:days)dp[x]=-1;
        for(int i=1;i<=365;i++){
            if(dp[i]==0){
                dp[i]=dp[i-1];
                continue;
            }
            dp[i]=dp[i-1]+costs[0];
            dp[i]=min(dp[i],dp[max(i-7,0)]+costs[1]);
            dp[i]=min(dp[i],dp[max(i-30,0)]+costs[2]);
        }
        return dp[365];
    }
};
