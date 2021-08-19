class Solution {
public:
    int n,m;
    int mat[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
    
    void dfs(int x,int y, vector<vector<char>>&board, vector<vector<int>>&v){
        v[x][y]=1;
        for(int i=0;i<4;i++){
            int k=x+mat[i][0],l=y+mat[i][1];
            if(k>=0 && k<n && l>=0 && l<m && board[k][l]=='X' && !v[k][l] )
            dfs(k,l,board,v);
        }
        
    }
    
    int countBattleships(vector<vector<char>>& board) {
        n=board.size();
        m=board[0].size();
        vector<vector<int>>v(n,vector<int>(m,0));
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!v[i][j] && board[i][j]=='X'){
                    dfs(i,j,board,v);
                    ans++;
                }
            }
        }
        return ans;
    }
};
