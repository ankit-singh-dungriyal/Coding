// E. Modular Stability ( Educational Codeforces Round 88 (Rated for Div. 2) )
// Concept used: Binomial coefficients, Modular inverse, euclid algorithms.
// 'By Anki'
 
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define wr(i) cout<<#i<<" = "<<i<<",  ";
#define wre(i) cout<<#i<<"  =  "<<i<<endl;
#define all(v) v.begin(),v.end()
typedef long long ll;
#define lim 998244353LL
typedef unsigned long long ull;
#define PI 3.14159265358
#define M 998244353LL
using u64= uint64_t;
typedef double db;
 

ll fact[500005];
// ll inv[500005];
void factorial(){
    fact[0]=1;
    for(int i=1;i<=500005;i++)fact[i]=(fact[i-1]*i)%M;
}
bool gd_num(ll a,ll b,ll i,ll n)
{
  ll ans=a*i+(n-i)*b;
  // wr(ans)
  while(ans){
    if(ans%10!=a && ans%10!=b)return false;
    ans/=10;
  }
  return true;
}

ll ex_gcd(ll a,ll b,ll &x,ll &y)
{
  if(b==0){
    x=1;y=0;
    return a;
  }
  ll x1,y1;
  ll g=ex_gcd(b,a%b,x1,y1);
  x=y1;
  y=x1-y1*(a/b);
  return g;
}
ll nCi(ll n,ll i)
{
  ll ans=0LL;
  ll x1,y1,x2,y2;
  ll g1=ex_gcd(fact[i],lim,x1,y1);
  ll g2=ex_gcd(fact[n-i],lim,x2,y2);
  x1=(x1%lim+lim)%lim;
  x2=(x2%lim+lim)%lim;
  ans=((x1*x2)%lim*fact[n])%lim;
  return ans;
}
int main()
{
fast
ll t=1LL;
 
factorial();
// inverse();
for(;t;t--){
ll n,k;
cin>>n>>k;
if(n<k)cout<<0<<"\n";
else
{
    ll ans=0LL;
    for(int i=1;i<=n;i++){
        ll tmp=n/i-1;
        if(tmp>=k-1)ans=(ans+nCi(tmp,k-1))%M;
    }
    cout<<ans<<"\n";
}

}
}
