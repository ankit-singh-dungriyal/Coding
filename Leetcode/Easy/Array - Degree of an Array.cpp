class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m;
        unordered_map<int,queue<int>>ans;
        for(auto x:nums)m[x]++;
        int mx=0;
        for(auto x:m)mx=max(mx,x.second);
        for(int i=0;i<n;i++)if(mx==m[nums[i]])ans[nums[i]].push(i);
        int res=n;
        for(auto x:ans)res=min(res,x.second.back()-x.second.front()+1);
        return res;
    }
};
