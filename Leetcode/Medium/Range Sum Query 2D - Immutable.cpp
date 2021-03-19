class NumMatrix {
    int n,m;
    vector<vector<int>>v;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        n=matrix.size();
        m=matrix[0].size();
        v.resize(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)v[i][j]=matrix[i-1][j-1];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(i==1 && j==1)continue;
                if(i==1)v[i][j]+=v[i][j-1];
                else if(j==1)v[i][j]+=v[i-1][j];
                else{
                    v[i][j]+=v[i-1][j]+v[i][j-1]-v[i-1][j-1];
                }
            }
        }

    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return(v[row2+1][col2+1]-v[row2+1][col1]-v[row1][col2+1]+v[row1][col1]);
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
