class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        
        for(int p=n-1;p>=0;p--){
            vector<int>tmp;
            int i=p,j=0,k=0;
            while(i<n && j<m)tmp.push_back(mat[i++][j++]);
            i=p,j=0;
            sort(tmp.begin(),tmp.end());
            while(i<n && j<m)mat[i++][j++]=tmp[k++];
        }
        for(int p=0;p<m;p++){
            vector<int>tmp;
            int i=0,j=p,k=0;
            while(i<n && j<m)tmp.push_back(mat[i++][j++]);
            i=0,j=p;
            sort(tmp.begin(),tmp.end());
            while(i<n && j<m)mat[i++][j++]=tmp[k++];
        }
        return mat;
    }
};
