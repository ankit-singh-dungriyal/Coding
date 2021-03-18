class Solution {
public:
    vector<vector<int>>ans;
    void solve(int k,int n,vector<int>&tmp,int j){
        if(n<0)return;
        if(!k && !n){
            ans.push_back(tmp);
            return;
        }
        if(!k)return;
        for(int i=j;i<10;i++){
            tmp.push_back(i);
            solve(k-1,n-i,tmp,i+1);
            tmp.pop_back();
        }
        return;
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>tmp;
        solve(k,n,tmp,1);
        return ans;
    }
};
