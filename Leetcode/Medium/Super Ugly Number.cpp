class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        vector<int>v;
        v.push_back(1);
        int m=primes.size();
        vector<int>cnt(m,0);
        while(v.size()<n){
            int mn=INT_MAX;
            for(int i=0;i<m;i++)mn=min(mn,v[cnt[i]]*primes[i]);
            v.push_back(mn);
            for(int i=0;i<m;i++)if(v.back()==v[cnt[i]]*primes[i])cnt[i]++;
        }
        return v.back();
    }
};
