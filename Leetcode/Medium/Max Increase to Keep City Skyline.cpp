class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int>a(n);
        vector<int>b(m);
        for(int i=0;i<n;i++)a[i]=*max_element(grid[i].begin(),grid[i].end());
        for(int j=0;j<m;j++){
            int mx=grid[0][j];
            for(int i=0;i<n;i++)mx=max(mx,grid[i][j]);
            b[j]=mx;
        }
        int ans=0;
        // for(auto x:a)cout<<x<<" ";
        // cout<<endl;
        // for(auto x:b)cout<<x<<" ";
        // cout<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans+=max(0,min(a[i],b[j])-grid[i][j]);
            }
        }
        return ans;
    }
};
