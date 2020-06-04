// C. Beautiful Numbers (Codeforces Round #181 (Div. 2))
// Concept used: Binomial coefficient, modular inverse, extended euclidean algorithm,factorial
// 'By Anki'
 
#include<bits/stdc++.h>
// #include<iostream>
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
#define M 100006LL
using u64= uint64_t;
 

/* 
ll gcd(ll a,ll b){
    return b?gcd(b,a%b):a;
}
 
ll sp[100005][20];

void sparse(vector<ll>v,ll n)
{   
    ll k=log2(n)+1;
    for(int i=0;i<n;i++)sp[i][0]=v[i];
    for(int j=1;j<=k;j++)
    for(int i=0;i+(1<<j)<=n;i++)sp[i][j]=min(sp[i][j-1],sp[i+(1<<(j-1))][j-1]);
} 
ll mn_ans(ll l,ll r){
    ll j=log2(r-l+1);
    return min(sp[l][j],sp[r-(1<<j)+1][j]);
}
*/
ll fact[1000006];
void factorial()
{
  fact[0]=1;fact[1]=1;
  for(int i=2;i<=1000005;i++)fact[i]=(fact[i-1]*i)%lim;
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
for(;t;t--){
  ll a,b,n;
  cin>>a>>b>>n;
  factorial();
  ll ans=0LL;
  for(int i=0;i<=n;i++)
  if(gd_num(a,b,i,n))ans=(ans+nCi(n,i))%lim;
  cout<<ans<<"\n";
}
} 
