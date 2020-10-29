class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mn=prices[0];
        int mx=prices[n-1];
        int dp_l[n],dp_r[n];
        dp_l[0]=0,dp_r[n-1]=0;
        for(int i=1,j=n-2;i<n;i++,j--){
            mn=min(mn,prices[i]);
            dp_l[i]=max(dp_l[i-1],prices[i]-mn);
            mx=max(mx,prices[j]);
            dp_r[j]=max(dp_r[j+1],mx-prices[j]);
        }
        int ans=0;
        // for(auto x:dp_r)cout<<x<<" ";
        ans=max(ans,max(dp_r[0],dp_l[n-1]));
        for(int i=1;i<n-1;i++)ans=max(ans,dp_l[i]+dp_r[i+1]);
        return ans;
    }
};
