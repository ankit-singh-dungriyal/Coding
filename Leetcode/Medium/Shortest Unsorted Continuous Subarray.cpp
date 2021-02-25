class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>tmp;
        int n=nums.size();
        for(auto x:nums)tmp.push_back(x);
        int ans=0,p=0,q=-1;
        sort(tmp.begin(),tmp.end());
        for(int i=0;i<n;i++){
            if(nums[i]!=tmp[i]){
                p=i;break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(nums[i]!=tmp[i]){
                q=i;
                break;
            }
        }
        ans=q-p+1;
        return ans;
        
    }
};
