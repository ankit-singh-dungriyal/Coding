class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int ans=0,k=-prices[0];
        for(int x:prices){
            ans=max(ans,k+x-fee);
            k=max(k,ans-x);
        }
        return ans;
    }
};
