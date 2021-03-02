class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        map<vector<int>,bool>m;
        int n=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        ans.push_back(nums);
        m[nums]=true;
        while(next_permutation(nums.begin(),nums.end())){
            if(!m[nums])ans.push_back(nums);
        }
        return ans;
    }
};
