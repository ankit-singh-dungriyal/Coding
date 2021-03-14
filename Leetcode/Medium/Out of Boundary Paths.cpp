class Solution {
    vector<vector<vector<int>>>v;
    int mm,nn;
    int mod=1000000007;
    int mat[4][2]={{0,-1},{0,1},{1,0},{-1,0}};
public:
    
    int dfs(int N,int i,int j){
        if(i<0 ||i>=mm||j<0||j>=nn)return 1;
        if(N==0)return 0;
        if(v[i][j][N]>=0)return v[i][j][N];
        v[i][j][N]=0;
        for(int l=0;l<4;l++){
            int p=mat[l][0]+i,q=mat[l][1]+j;
            v[i][j][N]=(v[i][j][N]+dfs(N-1,p,q))%mod;
        }
        return v[i][j][N];
    }
    
    int findPaths(int m, int n, int N, int i, int j) {
        vector<vector<vector<int>>>grid(m,vector<vector<int>>(n,vector<int>(N+1,-1)));
        v=grid;
        return dfs(N,i,j);
    }
};
