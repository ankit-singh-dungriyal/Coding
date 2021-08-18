class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans=s;
        int j=0;
        for(int &i:indices)ans[i]=s[j++];
        return ans;
    }
};
