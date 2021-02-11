class Solution {
public:
    
    bool dfs(vector<vector<int>>&grid,int i,int j,int n,int m){
        if(grid[i][j]==1 ||grid[i][j]==-1)return 1;
        if(i==0||i==n-1||j==0||j==m-1)return 0;
        grid[i][j]=-1;
        bool a=dfs(grid,i,j+1,n,m);
        bool b=dfs(grid,i,j-1,n,m);
        bool c=dfs(grid,i+1,j,n,m);
        bool d=dfs(grid,i-1,j,n,m);
        return a&&b&&c&&d;
    }
    
    int closedIsland(vector<vector<int>>& grid) {
        int ans=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=1;i<=n-2;i++){
            for(int j=1;j<=m-2;j++)if(!grid[i][j])ans+=dfs(grid,i,j,n,m);
        }
        return ans;
    }
};
