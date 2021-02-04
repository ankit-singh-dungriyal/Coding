class Solution {
public:
    
    bool detect_cycle(vector<vector<int>>&graph,int node,vector<int>&color){
        if(color[node])return color[node]==1;
        color[node]=1;
        for(auto x:graph[node]){
            if(color[x]==1)return true;
            else if(!color[x] && detect_cycle(graph,x,color))return true;
        }
        color[node]=2;
        return false;
    }
    
    void dfs(vector<vector<int>>&graph,int node,vector<int>&vis,vector<int>&ans){
        vis[node]=1;
        for(auto x:graph[node]){
            if(!vis[x])dfs(graph,x,vis,ans);
        }
        ans.push_back(node);
        return;
    }
    
    vector<int> findOrder(int n, vector<vector<int>>& prerequisites) {
        vector<vector<int>>graph(n);
        vector<int>color(n,0),ans,vis(n,0);
        for(auto x:prerequisites)graph[x[0]].push_back(x[1]);
        for(int i=0;i<n;i++){
            if(detect_cycle(graph,i,color)){cout<<i<<" ";return ans;}
        }
        
        for(int i=0;i<n;i++){
            if(!vis[i])dfs(graph,i,vis,ans);
        }
        return ans;
        
        
    }
};
