/*
Contest Id: 1475
Submission Id: 108022663
Date & Time: 20/02/2021 16:51:31
Tags/Concept used: ['combinatorics', 'math', 'sortings']
*/


#include<bits/stdc++.h>
// #include<thread>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define wr(i) cout<<#i<<" = "<<i<<",  ";
#define wre(i) cout<<#i<<"  =  "<<i<<endl;
#define all(v) v.begin(),v.end()
typedef long long ll;
#define lim 1000000000000000000LL
typedef unsigned long long ull;
#define mod 1000000007
#define M 31
#define N 30
#define F first
#define S second
using u64= uint64_t;


class pandc{
    vector<ll>fact,inv,ifact;
    public:
    pandc(ll n){
        fact.resize(n+1);
        inv.resize(n+1);
        ifact.resize(n+1);
        fact[0]=1;
        inv[0]=1;
        ifact[0]=1;
        for(int i=1;i<=n;i++){
            fact[i]=(fact[i-1]*i)%mod;
            inv[i]=power(i,mod-2);
            ifact[i]=power(fact[i],mod-2);
        }
    }
    ll power(ll x,ll y){
        ll res=1LL;
        while(y){
            if(y&1)res=(res*x)%mod;
            x=(x*x)%mod;
            y>>=1;
        }
        return res;
    }
    ll factorial(ll x){
        return (x>=0)?fact[x]:0;
    }
    ll ncr(ll n,ll r){
        ll tmp=(fact[n]*ifact[r])%mod;
        return(tmp*ifact[n-r])%mod;
    }
};
void solve(){
    ll n,k;
    cin>>n>>k;
    pandc pc(n);
    vector<ll>v(n),tmp;
    map<ll,ll>m,p;
    for(auto &x:v)cin>>x,m[x]++;
    for(auto x:v){
        if(!p[x]){
            p[x]=1;
            tmp.pb(x);
        }
    }
    sort(all(tmp),greater<ll>());
    ll cn=0,sum=0,ans;
    for(auto x:tmp){
        if(sum+m[x]>=k){
            // wr(m[x])wr(k-sum)
            ans=pc.ncr(m[x],k-sum);
            break;
        }
        sum+=m[x];
    }
    cout<<ans<<"\n";

    return;
}

int main()
{
fast
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll t=1LL;
cin>>t;
while(t--)
{
solve();  

}
 
} 