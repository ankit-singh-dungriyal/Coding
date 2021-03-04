class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        int k=(1<<n) -1 ;
        vector<vector<int>>ans;
        ans.push_back({});
        map<vector<int>,bool>m;
        while(k){
            vector<int>tmp;
            int p=k,cn=0;
            while(p){
                if(p&1)tmp.push_back(nums[cn]);
                p>>=1;
                cn++;
            }
            k--;
            sort(tmp.begin(),tmp.end());
            if(!m[tmp])
            ans.push_back(tmp);
            m[tmp]=true;
        }
        return ans;
    }
};
