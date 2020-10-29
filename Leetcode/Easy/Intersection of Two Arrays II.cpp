class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m1,m2;
        vector<int>ans;
        for(auto x:nums1)m1[x]++;
        for(auto x:nums2)m2[x]++;
        for(auto x:m1)for(int i=0;i<min(x.second,m2[x.first]);i++)ans.push_back(x.first);
        return ans;
    }
};
