class Solution {
    int ans=0;
public:
    
    bool check(vector<string>&vs, int x, int y, int n){
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                if(vs[i][j]=='Q' && (x==i || y==j || x+y == i+j || x-y == i-j))return false;
        return true;
    }
    
    void solve(vector<string>&vs, int i, int n){
        if(i==n){ans++; return;}
        for(int j=0;j<n;j++)
            if(check(vs,i,j,n)){
                vs[i][j]='Q';
                solve(vs,i+1,n);
                vs[i][j]='.';
            }
    }
    
    int totalNQueens(int n) {
        string str;
        vector<string>vs(n, str.assign(n,'.'));
        solve(vs,0,n);
        return ans;
    }
};
