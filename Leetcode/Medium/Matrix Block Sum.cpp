class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int K) {
        int n=mat.size();
        int m=mat[0].size();
        for(int i=1;i<n;i++)mat[i][0]+=mat[i-1][0];
        for(int i=1;i<m;i++)mat[0][i]+=mat[0][i-1];
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                mat[i][j]+=mat[i-1][j]+mat[i][j-1]-mat[i-1][j-1];
                // cout<<mat[i][j]<<" ";
            }
            // cout<<"\n";
        }
        vector<vector<int>>v(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                v[i][j]=mat[min(i+K,n-1)][min(j+K,m-1)];
                int x=0,y=0,xy=0;
                if(i-K>0)x=mat[i-K-1][min(j+K,m-1)];
                if(j-K>0)y=mat[min(i+K,n-1)][j-K-1];
                if(x && y)xy=mat[i-K-1][j-K-1];
                v[i][j]+=xy-x-y;
                // cout<<x<<" "<<y<<" "<<xy<<"\n";
            }
        }
        return v;
    }
};
