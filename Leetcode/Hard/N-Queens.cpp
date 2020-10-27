class Solution {
public:
    bool check(int x,int y,vector<string>&tmp,int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(tmp[i][j]=='Q'){
                    if(x==i || y==j || x+y==i+j || x-y==i-j)return false;
                }
            }
        }
        return true;
    }
    
    void solve(vector<vector<string>>&ans,vector<string>&tmp,int i,int n){
        if(i==n){
            ans.push_back(tmp);
        }
        else{
            for(int j=0;j<n;j++){
                if(check(i,j,tmp,n)){
                    tmp[i][j]='Q';
                    solve(ans,tmp,i+1,n);
                    tmp[i][j]='.';
                }
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>tmp(n);
        string s="";
        for(int i=0;i<n;i++)s+='.';
        for(auto &x:tmp)x=s;
        solve(ans,tmp,0,n);
        return ans;
        
        
    }
};
