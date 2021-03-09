class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        if(n<2)return 0;
        int mx=*max_element(nums.begin(),nums.end());
        vector<int>tmp(n);
        for(int k=1;mx/k>0;k*=10){
            vector<int>count(10,0);
            for(auto &x:nums)count[(x/k)%10]++;
            for(int i=1;i<10;i++)count[i]+=count[i-1];
            for(int i=n-1;i>=0;i--){
                tmp[--count[(nums[i]/k)%10]]=nums[i];
            }
            for(int i=0;i<n;i++)nums[i]=tmp[i];
        }
        int ans=0;
        for(int i=1;i<n;i++)ans=max(ans,nums[i]-nums[i-1]);
        return ans;
    }
};
