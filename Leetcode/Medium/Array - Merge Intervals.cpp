class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        sort(v.begin(),v.end());
        vector<vector<int>>ans;
        int n=v.size();
        if(!n)return ans;
        int l=v[0][0],r=v[0][1];
        for(int i=1;i<n;i++){
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
