class Solution {
public:
    
    bool dfs(vector<vector<int>>&graph,int node,vector<int>&color){
        if(color[node]!=0)return color[node]==1;
        color[node]=1;
        for(auto x:graph[node]){
            if(color[x]==1)return true;
            else if(!color[x] && dfs(graph,x,color))return true;
        }
        color[node]=2;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>color(n,0);
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(!dfs(graph,i,color))ans.push_back(i);
        }
               return ans;
    }
};
