class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int ans=0;
        int n=matrix.size();
        int m=matrix[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)if(matrix[i][j]=='1'){
                ans=1;
                break;
            }
            if(ans)break;
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][j]!='0' && matrix[i][j]<=matrix[i][j-1] && matrix[i][j]<=matrix[i-1][j-1] && matrix[i][j]<=matrix[i-1][j]){
                    int k=matrix[i][j-1]-'0';
                    k=min(k,matrix[i-1][j-1]-'0');
                    k=min(k,matrix[i-1][j]-'0');
                    matrix[i][j]='0'+k+1;
                    ans=max(ans,matrix[i][j]-'0');
                }
            }
        }
        
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++)cout<<matrix[i][j]<<" ";
        //     cout<<"\n";
        // }
        return ans*ans;
    }
};
