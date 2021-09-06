class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<vector<int>>>ans(target+1);
        for(int i=1;i<=target;i++){
            set<vector<int>>s;
            for(int &cnd:candidates){
                int j=i-cnd;
                if(j>=0){
                    if(j==0)ans[i].push_back({i});
                    else if(!ans[j].empty()){
                        for(auto v:ans[j]){
                            v.push_back(cnd);
                            sort(v.begin(),v.end());
                            s.insert(v);
                        }
                    }
                }
            }
            for(auto v:s)ans[i].push_back(v);
        }
        return ans[target];
    }
};
