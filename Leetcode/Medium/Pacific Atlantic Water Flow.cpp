class Solution {
    int mat[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
    void dfs(vector<vector<vector<int>>>&v,vector<vector<int>>&a,int n,int m,int i,int j,int k){
        if(i<0||i>=n||j<0||j>=m)return ;
        if(v[i][j][k]==1)return;
        v[i][j][k]=1;
        for(int l=0;l<4;l++){
            int p=mat[l][0]+i,q=mat[l][1]+j;
            if(p>=0 && p<n && q>=0 && q<m){
                if(a[p][q]>=a[i][j])dfs(v,a,n,m,p,q,k);
            }
        }
    }
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& matrix) {
        vector<vector<int>>ans;
        int n=matrix.size();
        if(!n)return ans;
        int m=matrix[0].size();
        vector<vector<vector<int>>>v(n,vector<vector<int>>(m,vector<int>(2,0)));
        for(int i=0;i<n;i++)v[i][0][0]=-1,v[i][m-1][1]=-1;
        for(int i=0;i<m;i++)v[0][i][0]=-1,v[n-1][i][1]=-1;
        for(int i=0;i<n;i++){
            dfs(v,matrix,n,m,i,0,0);
            dfs(v,matrix,n,m,i,m-1,1);
        }
        for(int i=0;i<m;i++){
            dfs(v,matrix,n,m,0,i,0);
            dfs(v,matrix,n,m,n-1,i,1);
        }


        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j][0]==-1)v[i][j][0]=1;
                if(v[i][j][1]==-1)v[i][j][1]=1;
                if(v[i][j][0] && v[i][j][1])ans.push_back({i,j});
            }
        }

        return ans;
    }
};
