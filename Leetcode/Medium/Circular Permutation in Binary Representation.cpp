class Solution {
    int grayCode(int x){
        return x^(x>>1);
    }
public:
    vector<int> circularPermutation(int n, int start) {
        // if(n==1)return{0,1};
        int sz=1<<n;
        vector<int>v(sz);
        v[0]=start;
        for(int i=1;i<sz;i++)v[i]=start^grayCode(i);
        return v;
        
    }
};
