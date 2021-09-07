/*
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>um;
        int n=nums.size();
        for(int &i: nums)um[i]++;
        vector<int>ans;
        for(auto x:um){
            if(x.second>n/3)ans.push_back(x.first);
        }
        return ans;
    }
};
*/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>um;
        int n=nums.size();
        for(int &i: nums)um[i]++;
        vector<int>ans;
        for(auto x:um){
            if(x.second>n/3)ans.push_back(x.first);
        }
        return ans;
    }
};
