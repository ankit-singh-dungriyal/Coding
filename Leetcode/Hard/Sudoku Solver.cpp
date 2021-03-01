class Solution {
public:
    
    vector<vector<char>>ans;
    bool check(vector<vector<char>>&sudo,int p,int q,char ch){
        for(int i=0;i<9;i++){
            // if(i==q)continue;
            if(sudo[p][i]==ch)return false;
        }
        for(int i=0;i<9;i++){
            // if(i==p)continue;
            if(sudo[i][q]==ch)return false;
        }
        int l=p/3,r=q/3;
        for(int i=l*3;i<l*3+3;i++){
            for(int j=r*3;j<r*3+3;j++){
                if(sudo[i][j]==ch)return false;
            }
        }
        return true;
    }

    
    void solve(vector<vector<char>>&v){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(v[i][j]=='.'){
                    for(int k=1;k<=9;k++){
                        if(check(v,i,j,(char)('0'+k))){
                            v[i][j]=(char)('0'+k);
                            solve(v);
                            v[i][j]='.';
                        }
                    }
                    return;
                }
            }
        }
        ans=v;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
        board=ans;
        return ;
        
    }
};
