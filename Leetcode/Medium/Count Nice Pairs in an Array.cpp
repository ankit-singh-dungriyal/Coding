class Solution {
    int mod=1000000007;
    int rev(int x){
        int res=0;
        while(x)res=res*10+x%10,x/=10;
        return res;
    }
public:
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,int>um;
        long ans=0;
        for(int &x:nums){
            long tmp=x-rev(x);
            ans+=um[tmp];
            um[tmp]++;
        }
        return ans%mod;
        
    }
};
