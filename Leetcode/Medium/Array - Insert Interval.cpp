class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& v, vector<int>& a) {
        int n=v.size();
        vector<vector<int>>ans;
            v.push_back({a[0],a[1]});
            sort(v.begin(),v.end());
            int l=v[0][0],r=v[0][1];
            for(int i=1;i<n+1;i++){
                if(v[i][0]<=r)r=max(r,v[i][1]);
                else{
                    ans.push_back({l,r});
                    l=v[i][0];
                    r=v[i][1];
                }
            }
            ans.push_back({l,r});
            return ans;
    }
};
