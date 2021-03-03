class Solution {
public:
    
    vector<vector<int>>ans;
    void solve(int i,int k,vector<int>tmp,int n){
        if(!k){
            ans.push_back(tmp);
            return;
        }
        for(int j=i;j<=n;j++){
            tmp.push_back(j);
            solve(j+1,k-1,tmp,n);
            tmp.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<int>tmp;
        solve(1,k,tmp,n);
        return ans;
    }
};
