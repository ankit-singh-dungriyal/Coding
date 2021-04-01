class Solution {
    vector<vector<int>>v;
    int n,m;
    vector<bool>vis;
    
    void dfs(int n){
        vis[n]=true;
        for(auto x:v[n])if(!vis[x])dfs(x);
        return;
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        v.resize(n);
        vis.resize(n,false);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(isConnected[i][j]){
                    v[i].push_back(j);
                    v[j].push_back(i);
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i);
                ans++;
            }
        }
        return ans;
    }
};
