class Solution {
public:
    
    bool dfs(int node,vector<vector<int>>&graph,vector<int>&color){
        for(auto x:graph[node]){
            if(!color[x]){
                color[x]=-color[node];
                if(!dfs(x,graph,color))return false;
            }
            else if(color[node]==color[x])return false;
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>color(n,0);
        
        for(int i=0;i<n;i++){
            if(!color[i]){
                color[i]=1;
                if(!dfs(i,graph,color))return false;
            }
        }
        return true;
    }
};
