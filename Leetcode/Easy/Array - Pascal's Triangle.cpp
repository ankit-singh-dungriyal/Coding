class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
            vector<int>tmp(i,1);
            int s=ans.size();
            if(i==1)ans.push_back(tmp);
            else{
                for(int j=1;j<i-1;j++)tmp[j]=ans[s-1][j-1]+ans[s-1][j];
                ans.push_back(tmp);
            }
        }
        return ans;
    }
};
