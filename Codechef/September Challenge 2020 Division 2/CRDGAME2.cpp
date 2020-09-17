// By 'Anki'
// Concept used: modular inverse, binomial coefficient, factorial, game theory

#include<bits/stdc++.h>
#include<thread>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define wr(i) cout<<#i<<" = "<<i<<",  ";
#define wre(i) cout<<#i<<"  =  "<<i<<endl;
#define all(v) v.begin(),v.end()
typedef long long ll;
#define lim 1000000007LL
typedef unsigned long long ull;
#define M 1000006
#define F first
#define S second
using u64= uint64_t;
 

ll power(ll x,ll y){
    ll res=1LL;
    while(y){
        if(y&1)res=(res*x)%lim;
        x=(x*x)%lim;
        y/=2;
    }
    return res%lim;
}

ll fact[M];
void fct(){
    fact[0]=1;
    for(int i=1;i<M;i++)fact[i]=(fact[i-1]*i)%lim;
}
ll inv(ll x){
    return power(x,lim-2);
}

ll nCr(ll n,ll r){
    if(n<r)return 0;
   ll ans=(fact[n]*inv(fact[n-r])%lim)%lim;
   ans=(ans*inv(fact[r])%lim)%lim;
    return ans;
}

int main()
{
fast
ll t=1LL;
fct();
cin>>t;
while(t--)
{
ll n;
cin>>n;
vector<ll>v(n);
for(auto &x:v)cin>>x;
ll mx=*max_element(all(v));
ll cn=0LL;
for(auto x:v)if(x==mx)cn++;
ll ans;
// wr(cn)
if(cn&1)ans=power(2,n);
else ans=power(2,n)-(nCr(cn,cn/2)*power(2,n-cn))%lim;
if(ans<0)ans+=lim;
cout<<ans<<"\n";


}

} 
