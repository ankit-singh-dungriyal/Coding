class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<pair<int,int>>v;
        for(string s:strs){
            int cnz=0,cno=0;
            for(char ch:s){
                if(ch=='0')cnz++;
                else cno++;
            }
            v.push_back(make_pair(cnz,cno));
        }
        int  sz=strs.size();
        int dp[m+1][n+1][sz+1];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                for(int k=1;k<=sz;k++){
                    int x=v[k-1].first,y=v[k-1].second;
                    if(x<=i && y<=j)dp[i][j][k]=max(dp[i][j][k-1],dp[i-x][j-y][k-1]+1);
                    else dp[i][j][k]=dp[i][j][k-1];
                }
            }
        }
        return dp[m][n][sz];
        
    }
};
