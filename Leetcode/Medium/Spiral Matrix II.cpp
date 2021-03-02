class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n));
        int il=0,ir=n-1,jl=0,jr=n-1;
        bool f=true;
        int cn=1;
        while(il<=ir && jl<=jr){
            if(f){
                f=!f;
                for(int k=jl;k<=jr;k++)ans[il][k]=cn++;
                il++;
                for(int k=il;k<=ir;k++)ans[k][jr]=cn++;
                jr--;
            }
            else{
                f=!f;
                for(int k=jr;k>=jl;k--)ans[ir][k]=cn++;
                ir--;
                for(int k=ir;k>=il;k--)ans[k][jl]=cn++;
                jl++;
            }
        }
        return ans;
    }
};
