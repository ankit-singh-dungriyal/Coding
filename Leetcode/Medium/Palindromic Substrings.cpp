class Solution {
public:
    int countSubstrings(string s) {
        int n=s.length();
        if(!n)return 0;
        vector<vector<int>>dp(n,vector<int>(n,0));
        dp[0][0]=1;
        int ans=n;
        for(int i=1;i<n;i++){
            if(s[i-1]==s[i])dp[i-1][i]=1,ans++;
            dp[i][i]=1;
        }
        for(int i=2;i<=n;i++){
            for(int j=0;j<=n-i;j++){
                if(s[j]==s[j+i] && dp[j+1][j+i-1])dp[j][j+i]=1,ans++;
            }
        }
            
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++)cout<<dp[i][j]<<" ";
        //     cout<<"\n";
        // }
   
        return ans;
    }
};
