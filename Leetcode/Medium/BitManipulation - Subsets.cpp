class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int k=pow(2,n);
        vector<vector<int>>ans;
        ans.push_back({});
        for(int i=1;i<k;i++){
            vector<int>tmp;
            int p=i,cn=0;
            while(p){
                if(p&1)tmp.push_back(nums[cn]);
                cn++;
                p/=2;
            }
            ans.push_back(tmp);
            
        }
        return ans;
    }
};
