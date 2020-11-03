class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++)swap(matrix[i][j],matrix[j][i]);
        }
        for(int i=0;i<n;i++){
            int j=0,k=n-1;
            while(j<k)swap(matrix[i][j++],matrix[i][k--]);
        }
        return;
    }
};
