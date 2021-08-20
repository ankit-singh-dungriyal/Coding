class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mx=0;
        for(vector<int> v: accounts)mx=max(mx,accumulate(v.begin(),v.end(),0));
        return mx;
    }
};
