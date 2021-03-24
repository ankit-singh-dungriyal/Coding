class Solution {
    long mod=1000000007;
    
public:
    int threeSumMulti(vector<int>& arr, int target) {
        map<long,long>m;
        for(int x:arr)m[x]++;
        long ans=0;
        for(auto x:m){
            for(auto y:m){
                long a=x.first,b=y.first;
                long c=target-a-b;
                if(m[c]){
                    if(a==b && b==c)ans=(ans+(m[a]*(m[a]-1)*(m[a]-2))/6)%mod;
                    else if(a==b && b!=c)ans=(ans+((m[a]*(m[a]-1))/2)*m[c])%mod;
                    else if(a<b && b<c)ans=(ans+m[a]*m[b]*m[c])%mod;
                }
            }
        }
        ans=ans%mod;
        return ans;
        
        
        
    }
};
