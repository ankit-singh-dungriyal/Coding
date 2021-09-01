class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int n=nums.size(),ans=0;
        vector<bool>f(n,true);
        for(int i=0;i<n;i++){
            int cnt=0,j=i;
            while(f[j]){
                cnt++;
                f[j]=false;
                j=nums[j];
            }
            ans=max(ans,cnt);
        }
        return ans;
    }
};
