class Solution {
public:
    void dfs(vector<vector<int>>&graph,vector<vector<int>>&ans,vector<int>trav,int node,int n){
        trav.push_back(node);
        if(node==n && !trav.empty())ans.push_back(trav);
        for(auto x:graph[node]){
            dfs(graph,ans,trav,x,n);
        }
        return ;
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size()-1;
        vector<vector<int>>ans;
        vector<int>trav;
        dfs(graph,ans,trav,0,n);
        return ans;
    }
};
