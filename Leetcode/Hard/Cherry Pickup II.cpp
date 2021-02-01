class Solution {
public:
    
    int dfs(vector<vector<vector<int>>>&dp,vector<vector<int>>&grid,int r,int c1,int c2,int n,int m){
        if(c1<0||c1>=m||c2<0||c2>=m||r==n)return 0;
        
        if(dp[r][c1][c2]!=-1)return dp[r][c1][c2];
        else{
            int tmp=0;
            for(int i=c1-1;i<=c1+1;i++){
                for(int j=c2-1;j<=c2+1;j++){
                    tmp=max(tmp,dfs(dp,grid,r+1,i,j,n,m));
                }
            }
            int ans=tmp;
            if(c1==c2)ans+=grid[r][c1];
            else ans+=grid[r][c1]+grid[r][c2];
            return dp[r][c1][c2]=ans;
        }
        
    }
    
    int cherryPickup(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int r=0,c1=0,c2=m-1;
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(m,vector<int>(m,-1)));
        return dfs(dp,grid,r,c1,c2,n,m);
        
    }
};
