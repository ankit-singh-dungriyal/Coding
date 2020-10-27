
vector<vector<int> > Solution::prettyPrint(int A) {
    vector<vector<int>>ans(2*A-1,vector<int>(2*A-1));
    int p=0,n=2*A-1;
    for(int i=A;i>=0;i--){
        int l=p,r=n-1-p;
        for(int j=l;j<=r;j++)for(int k=l;k<=r;k++)ans[j][k]=i;
        p++;
    }
    return ans;
}
