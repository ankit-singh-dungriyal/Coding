class Solution {
public:
    
    bool ans=false;
    void dfs(vector<int>&arr,int i,vector<bool>&vis,int n){
        if(i<0 || i>=n)return ;
        if(vis[i])return ;
        vis[i]=true;
        if(arr[i]==0)ans=true;
        dfs(arr,i-arr[i],vis,n);
        dfs(arr,i+arr[i],vis,n);
        return ;
        
    }
    
    bool canReach(vector<int>& arr, int start) {
        int n=arr.size();
        vector<bool>vis(n,false);
        dfs(arr,start,vis,n);
        return ans;
    }
};
