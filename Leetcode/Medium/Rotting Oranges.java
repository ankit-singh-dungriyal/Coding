class Solution {
    private boolean solve(int [][]a,int i,int j, int m,int n,int x){
        boolean f=false;
        if(i>0 && a[i-1][j]==1){
            a[i-1][j]=x+1;
            f=true;
        }
        if(j>0 && a[i][j-1]==1){
            a[i][j-1]=x+1;
            f=true;
        }
        if(i<m-1 && a[i+1][j]==1){
            a[i+1][j]=x+1;
            f=true;
        }
        if(j<n-1 && a[i][j+1]==1){
            a[i][j+1]=x+1;
            f=true;
        }
        return f;
    }
    public int orangesRotting(int[][] grid) {
        boolean f=true;
        int m=grid.length;
        int n=grid[0].length;
        int x=2;
        while(f){
            f=false;
            for(int i=0;i<m;i++)
                for(int j=0;j<n;j++)
                    if(grid[i][j]==x && solve(grid,i,j,m,n,x))f=true;
            x++;
        }
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(grid[i][j]==1)return -1;
        return x-3;
    }
}
