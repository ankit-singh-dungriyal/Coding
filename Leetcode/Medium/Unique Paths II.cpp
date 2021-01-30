class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& v) {
        int m=v.size();
        int n=v[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                v[i][j]=!v[i][j];
                if(i==0 && j==0)continue;
                else if(i==0)v[i][j]&=v[i][j-1];
                else if(j==0)v[i][j]&=v[i-1][j];
                else if(v[i][j])v[i][j]=v[i-1][j]+v[i][j-1];
                // cout<<v[i][j]<<" ";
            }
            // cout<<"\n";
        }
        return v[m-1][n-1];
    }
};
