class Solution {
    private int xs,ys,count=0, ans=0;
    public int uniquePathsIII(int[][] grid) {
        initialize(grid);
        solve(xs,ys,count,grid);
        return ans;
    }
    
    private void initialize(int[][] grid){
        for(int i=0;i<grid.length;i++)
            for(int j=0;j<grid[0].length;j++){
                if(grid[i][j]==1){
                    xs=i;
                    ys=j;
                }
                if(grid[i][j]==0)count++;
            }

    }
    
    private void solve(int x, int y, int count, int[][]grid){
        backtrack(x-1,y,count,grid);
        backtrack(x,y-1,count,grid);
        backtrack(x+1,y,count,grid);
        backtrack(x,y+1,count,grid);
    }
    
    private void backtrack(int x, int y, int count, int[][]grid){
        int m=grid.length, n=grid[0].length;
        if(x<0 || y<0 || x>=m || y>=n)return;
        if(grid[x][y]==2 && count==0)ans++;
        else if(grid[x][y]==0){
            grid[x][y]=1;
            solve(x,y,count-1,grid);
            grid[x][y]=0;
        }
    }
}
