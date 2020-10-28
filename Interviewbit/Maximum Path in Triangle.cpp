/*
    Asked in:  
    Amazon

*/

// DP

int Solution::solve(vector<vector<int> > &A) {
    int m=A.size();
    if(!m)return 0;
    int n=A[0].size();
    int dp[m][n];
    for(int i=0;i<m;i++)for(int j=0;j<n;j++)dp[i][j]=0;
    dp[0][0]=A[0][0];
    for(int i=1;i<m;i++){
        for(int j=0;j<n;j++){
            dp[i][j]=dp[i-1][j]+A[i][j];
            if(j>0)dp[i][j]=max(dp[i][j],dp[i-1][j-1]+A[i][j]);
        }
    }
    return *max_element(dp[m-1],dp[m-1]+m);
}
