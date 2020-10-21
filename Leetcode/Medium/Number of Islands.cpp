class Solution {
public:
    
    void dfs(int n,int m,vector<vector<char>>& grid,int x,int y){
        if(x>=0 && x<n && y>=0 && y<m && grid[x][y]=='1'){
            grid[x][y]='#';
            dfs(n,m,grid,x-1,y);
            dfs(n,m,grid,x,y-1);
            dfs(n,m,grid,x+1,y);
            dfs(n,m,grid,x,y+1);
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    ans++;
                    dfs(n,m,grid,i,j);
                }
            }
        }
        return ans;
        
    }
};
