class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        vector<int>ans;
        int n=encoded.size();
        int tmp=0;
        for(int i=1;i<=n+1;i++)tmp^=i;
        for(int i=1;i<n;i+=2)tmp^=encoded[i];
        ans.push_back(tmp);
        for(int &x:encoded)tmp^=x,ans.push_back(tmp);
        return ans;
    }
};
