class Solution {
public:
    
    int mat[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
    int n,m;
    void dfs(vector<vector<char>>&board,int i,int j){
        if(i<0 ||i>=n ||j<0||j>=m)return;
        if(board[i][j]!='O')return;
        board[i][j]='.';
        for(int k=0;k<4;k++){
            int p=i+mat[k][0],q=j+mat[k][1];
            dfs(board,p,q);
        }
        return;
    }
    
    void solve(vector<vector<char>>& board) {
        n=board.size();
        m=board[0].size();
        for(int i=0;i<n;i++){
            if(board[i][0]=='O')dfs(board,i,0);
            if(board[i][m-1]=='O')dfs(board,i,m-1);
        }
        for(int j=0;j<m;j++){
            if(board[0][j]=='O')dfs(board,0,j);
            if(board[n-1][j]=='O')dfs(board,n-1,j);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                board[i][j]=board[i][j]=='O'?'X':board[i][j];
                board[i][j]=board[i][j]=='.'?'O':board[i][j];
            }
        }
        return;
    }
};
