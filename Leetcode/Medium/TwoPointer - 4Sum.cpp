class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        set<vector<int>>s;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int l=j+1,r=n-1;
                while(l<r){
                long long sum=nums[i]+nums[j]+nums[l]+nums[r];
                if(sum==target)s.insert({nums[i],nums[j],nums[l],nums[r]}),l++,r--;
                else if(sum<target)l++;
                else r--;
                }
            }
        }
        for(auto x:s)ans.push_back(x);
        return ans;
    }
};
