class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end(),greater<int>());
        int n=piles.size(),ans=0;
        for(int i=1,cnt=1;cnt<=n/3;i+=2,cnt++)ans+=piles[i];
        return ans;
    }
};
