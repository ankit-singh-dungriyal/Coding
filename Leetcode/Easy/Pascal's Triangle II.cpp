class Solution {
public:
    vector<int> getRow(int n) {
        vector<int>ans(n+1);
        ans[0]=1;
        for(int i=1;i<=n;i++){
            ans[i]=1;
            for(int j=i-1;j>=1;j--)ans[j]+=ans[j-1];
        }
        return ans;
    }
};
