class Solution {
    vector<vector<int>>v;
    int n,m;
    int mat[4][2]={{0,-1},{0,1},{1,0},{-1,0}};
    int mx=INT_MAX-2;
    
    int dfs(int i,int j){
        if(i<0 ||i>=n ||j<0 ||j>=m|| v[i][j]==-1)return mx;
        if(v[i][j]==0 ||v[i][j]==1)return v[i][j];
        int mn=v[i][j];
        v[i][j]=-1;
        for(int k=0;k<4;k++){
            int p=mat[k][0]+i,q=mat[k][1]+j;
            mn=min(mn,dfs(p,q)+1);
        }
        v[i][j]=mn;
        return v[i][j];
    }
    
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        v=matrix;
        n=v.size();
        m=v[0].size();
        for(int i=0;i<n;i++)for(int j=0;j<m;j++)if(v[i][j]==1)v[i][j]=mx;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                dfs(i,j);
            }
        }

        return v;
    }
};
