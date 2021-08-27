class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int,unordered_set<int>>ms;
        for(auto &v: logs)ms[v[0]].insert(v[1]);
        vector<int>ans(k,0);
        for(auto &x: ms)ans[x.second.size()-1]++;
        return ans;
    }
};
