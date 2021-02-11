class Solution {
public:
    
    void dfs(int i,int j,vector<vector<char>>& board,int n,int m){
        if(i<0||i>n-1||j<0||j>m-1||!(board[i][j]=='M' || board[i][j]=='E'))return ;
        if(board[i][j]=='M'){
            board[i][j]='X';
            return;
        }
        int cn=0;
        for(int k=-1;k<=1;k++){
            for(int l=-1;l<=1;l++){
                // if(k && l && i+k>=0 && i+k<n && j+l>=0 && j+l<m && board[i+k][j+l]=='M'){
                //     cn++;
                // }
                if(k==0 && l==0)continue;
                if(i+k>=0 && i+k<n && j+l>=0 && j+l<m){
                    if(board[i+k][j+l]=='M')cn++;
                }
            }
        }
        if(!cn){
            board[i][j]='B';
            for(int k=-1;k<=1;k++)for(int l=-1;l<=1;l++){
                if(k==0 && l==0)continue;
                dfs(i+k,j+l,board,n,m);
            }
        }
        else{
              board[i][j]=cn+'0';
        }
        return;
        
    }
    
    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
        int n=board.size();
        int m=board[0].size();
        dfs(click[0],click[1],board,n,m);
        return board;
    }
};
