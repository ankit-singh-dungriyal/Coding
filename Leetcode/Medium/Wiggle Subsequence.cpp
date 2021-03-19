class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1])v.push_back(1);
            else if(nums[i]<nums[i-1])v.push_back(-1);
        }
        int ans=1;

        int m=v.size();
        for(int i=0;i<m;i++){
            while(i<m-1 && v[i]==v[i+1])i++;
            ans++;
        }
        return ans;
    }
};
