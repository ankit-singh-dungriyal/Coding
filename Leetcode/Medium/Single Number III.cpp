class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>m;
        vector<int>ans;
        int tmp=0;
        for(auto x:nums)m[x]=1,tmp^=x;
        for(auto x:nums){
            if(m.find(tmp^x)!=m.end()){
                ans.push_back(x);
                ans.push_back(tmp^x);
                return ans;
            }
        }
        return ans;
    }
};
