class Solution {
    public int numDistinct(String s, String t) {
        int m = s.length(), n= t.length();
        int ans[][] = new int[n+1][m+1];
        for(int i=0;i<=n;i++)ans[i][0]=0;
        for(int j=0;j<=m;j++)ans[0][j]=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(t.charAt(i-1) == s.charAt(j-1))ans[i][j] = ans[i-1][j-1]+ans[i][j-1];
                else ans[i][j] = ans[i][j-1];
            }
        }
        return ans[n][m];
    }
}
