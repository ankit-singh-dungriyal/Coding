class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<int,int>m;
        int n=wall.size();
        for(auto &v:wall){
            int sum=0;
            for(auto &x:v){
                sum+=x;
                m[sum]++;
            }
            m[sum]=0;
        }
        int ans=n;
        for(auto x:m){
            ans=min(ans,n-x.second);
        }
        return ans;
    }
};
