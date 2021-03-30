class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        vector<int>v(n+1,0);
        for(int i=0;i<n;i++)v[i+1]=v[i]^arr[i];
        vector<int>ans;
        for(auto &x:queries){
            ans.push_back(v[x[0]]^v[x[1]+1]);
        }
        return ans;
    }
};


/*
class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        vector<vector<int>>v(n+1,vector<int>(32,0));
        for(int i=0;i<n;i++){
            int cn=0,tmp=arr[i];
            while(tmp){
                if(tmp&1)v[i+1][cn]++;
                tmp>>=1;
                cn++;
            }
            for(int j=0;j<32;j++)v[i+1][j]+=v[i][j];
        }
        int m=queries.size(),k=0;
        vector<int>ans(m,0);
        for(auto x:queries){
            int l=x[0]+1,r=x[1]+1;
            for(int i=0;i<32;i++){
                if((v[r][i]-v[l-1][i])&1)ans[k]+=1<<i;
            }
            k++;
        }
        return ans;
    }
};
*/
