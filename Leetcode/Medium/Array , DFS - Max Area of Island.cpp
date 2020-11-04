class Solution {
public:
    int dfs(vector<vector<int>>&v,int x,int y,int m,int n){
        int ans=0;
        if(x>=0 && x<m && y>=0 && y<n && v[x][y]==1){
            v[x][y]=2;
            int a=dfs(v,x+1,y,m,n);
            int b=dfs(v,x,y+1,m,n);
            int c=dfs(v,x-1,y,m,n);
            int d=dfs(v,x,y-1,m,n);
            ans=1+a+b+c+d;
            return ans;
            
        }
        return 0;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        if(!m)return 0;
        int n=grid[0].size();
        // cout<<dfs(grid,0,0,m,n);
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1)ans=max(ans,dfs(grid,i,j,m,n));
            }
        }
        return ans;
    }
};
