class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    vector<bool>v(10,false);
                    for(int p=0;p<9;p++){
                        if(board[i][p]!='.' && v[board[i][p]-'0'])return false;
                        if(board[i][p]!='.')v[board[i][p]-'0']=true;
                    }
                    v.assign(10,false);
                    for(int p=0;p<9;p++){
                        if(board[p][j]!='.' && v[board[p][j]-'0'])return false;
                        if(board[p][j]!='.')v[board[p][j]-'0']=true;
                    }
                }
            }
        }
        vector<bool>v(10,false);
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                int l=3*i,r=3*j;
                v.assign(10,false);
                for(int p=l;p<l+3;p++){
                    for(int q=r;q<r+3;q++){
                        if(board[p][q]!='.'){
                        if(v[board[p][q]-'0']){cout<<1;return false;}
                        v[board[p][q]-'0']=true;
                        }
                    }
                }
            }
        }
        return true;
    }
};
