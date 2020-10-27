class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(!n)return 0;
        int dp[n];
        dp[0]=0;
        for(int i=1;i<n;i++)dp[i]=prices[i]-prices[i-1];
        int ans=0,sum=0;
        for(auto x:dp){
            sum+=x;
            if(sum<0)sum=0;
            ans=max(ans,sum);
        }
        return ans;
    }
};
