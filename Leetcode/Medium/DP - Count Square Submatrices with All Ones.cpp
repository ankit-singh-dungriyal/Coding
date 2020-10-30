class Solution {
public:
    int countSquares(vector<vector<int>>& v) {
        int ans=0;
        int m=v.size();
        int n=v[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i>0 && j>0 && v[i][j]!=0)v[i][j]=min(v[i-1][j],min(v[i][j-1],v[i-1][j-1]))+1;
                ans+=v[i][j];
            }
        }
        return ans;
    }
};
