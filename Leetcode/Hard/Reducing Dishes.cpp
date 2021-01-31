class Solution {
public:
    int maxSatisfaction(vector<int>& v) {
        sort(v.begin(),v.end());
        int n=v.size();
        vector<int>pre_sum(n),coef(n);
        pre_sum[n-1]=v[n-1];
        for(int i=n-2;i>=0;i--)pre_sum[i]=pre_sum[i+1]+v[i];
        int ans=0;
        for(int i=0;i<n;i++)coef[i]=(i+1)*v[i],ans+=coef[i];
        int tmp=0,sum=ans;
        // for(int i=0;i<n;i++)cout<<coef[i]<<" ";
        // cout<<ans<<" ";
        for(int i=0;i<n-1;i++){
            tmp+=coef[i];
            ans=max(ans,sum-tmp-(i+1)*pre_sum[i+1]);
            // cout<<sum-tmp<<" ";
            // cout<<ans<<" ";
        }
        return max(ans,0);
    }
};
