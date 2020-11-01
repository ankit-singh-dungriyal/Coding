class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        int n=trust.size();
        if(!n){
            if(N==1)return 1;
            else return -1;
        }
        vector<int>in(N+1,0),out(N+1,0);
        for(auto x:trust){
            out[x[0]]++;
            in[x[1]]++;
        }
        for(int i=1;i<=N;i++){
            if(in[i]==N-1 && !out[i])return i;
        }
        return-1;
    }
};
