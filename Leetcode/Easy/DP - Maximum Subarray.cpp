class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long ans=-10000000009,sum=0LL;
        for(auto x:nums){
            sum+=x;
            if(x>sum)sum=x;
            ans=max(ans,sum);
        }
        return ans;
    }
};
