class Solution {
public:
    
    void dfs(vector<vector<int>>&rooms,vector<bool>&vis,int node){
        vis[node]=true;
        for(auto x:rooms[node]){
            if(!vis[x])dfs(rooms,vis,x);
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool>vis(n,false);
        dfs(rooms,vis,0);
        for(auto x:vis)if(!x)return false;
        return true;
    }
};
