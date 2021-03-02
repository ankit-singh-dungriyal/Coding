class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<int>ans;
        if(!n)return ans;
        int m=matrix[0].size();
        int il=0,ir=n-1,jl=0,jr=m-1,i=0,j=0;
        bool f=true;
        while(il<=ir && jl<=jr){
            if(f){
                f=!f;
                for(int k=jl;k<=jr;k++)ans.push_back(matrix[il][k]);
                il++;
                for(int k=il;k<=ir;k++)ans.push_back(matrix[k][jr]);
                jr--;
            }
            else{
                f=!f;
                for(int k=jr;k>=jl;k--)ans.push_back(matrix[ir][k]);
                ir--;
                for(int k=ir;k>=il;k--)ans.push_back(matrix[k][jl]);
                jl++;
            }
        }
        return ans;
        
    }
};
