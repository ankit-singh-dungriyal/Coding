class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n=nums.size();
        if(n<4)return 0;
        unordered_map<int,int>m;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++)m[nums[i]*nums[j]]++;
        }
        int ans=0;
        for(auto &x:m){
            int tmp=x.second;
            ans+=tmp*(tmp-1)*4;
        }
        return ans;
    }
};
