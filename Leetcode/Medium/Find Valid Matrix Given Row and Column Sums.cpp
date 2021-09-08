class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rs, vector<int>& cs) {
        int n=rs.size(),m=cs.size();
        vector<vector<int>>ans(n,vector<int>(m,0));
        for(int i=0;i<n;i++)ans[i][0]=rs[i];
        for(int j=0,i=0;j<m;j++){
            int req=cs[j];
            while(req>ans[i][j]){
                req-=ans[i++][j];
            }
            int tmp=ans[i][j]-req;
            ans[i][j]=req;
            for(int k=i+1;k<n && j<m-1;k++){
                swap(ans[k][j],ans[k][j+1]);
            }
            if(j<m-1)ans[i][j+1]=tmp;
        }
        return ans;
    }
};
