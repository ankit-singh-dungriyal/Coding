class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<int>>m;
        for(int i=0;i<strs.size();i++){
            string tmp=strs[i];
            sort(tmp.begin(),tmp.end());
            m[tmp].push_back(i);
        }
        vector<vector<string>>ans;
        for(auto x:m){
            vector<string>tmp;
            for(auto i:x.second)tmp.push_back(strs[i]);
            ans.push_back(tmp);
        }
        return ans;
    }
};
