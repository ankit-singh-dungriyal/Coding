class Solution {
    
    bool dfs(vector<vector<int>>&v,vector<int>&color,int i,int c){
        if(color[i]!=-1){
            return color[i]==c;
        }
        color[i]=c;
        bool ans=1;
        for(auto x:v[i]){
            if(color[x]!=-1 && color[x]==c)return false;
            ans=ans&dfs(v,color,x,!c);
            
        }
        return ans;
    }
public:
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        vector<int>color(N+1,-1);
        vector<vector<int>>v(N+1);
        for(auto x:dislikes){
            v[x[0]].push_back(x[1]);
            v[x[1]].push_back(x[0]);
        }
        for(int i=1;i<=N;i++){
            if(color[i]==-1 && !dfs(v,color,i,0))return false;
        }
        return true;
    }
};
