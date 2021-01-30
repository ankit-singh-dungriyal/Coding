class Solution {
public:
    int minimumTotal(vector<vector<int>>& tri) {
        int n=tri.size();
        for(int i=1;i<n;i++){
            tri[i][0]+=tri[i-1][0];
            tri[i][i]+=tri[i-1][i-1];
            for(int j=1;j<i;j++)tri[i][j]+=min(tri[i-1][j],tri[i-1][j-1]);
        }
        return *min_element(tri[n-1].begin(),tri[n-1].end());
    }
};
