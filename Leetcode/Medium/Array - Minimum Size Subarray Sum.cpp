class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MAX;
        int l=0,sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum>=s){
                // cout<<"i="<<i<<" ";
                while(sum>=s)sum-=nums[l++];
                ans=min(ans,i-l+2);
                // cout<<"l= "<<l<<" ";
            }
        }
        return (ans==INT_MAX)?0:ans;
    }
};
