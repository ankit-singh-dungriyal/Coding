//Tags : Sieve of Eratosthenes, Segmented Sieve

#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define wr(i) cout<<#i<<" = "<<i<<",  ";
#define wre(i) cout<<#i<<"  =  "<<i<<endl;
#define all(v) v.begin(),v.end()
typedef long long ll;
// #define lim 1000000007
#define M 10000006


void prime(ll n,vector<ll>&pr){
    vector<bool>f(n+1,true);
    f[0]=f[1]=false;
    for(int i=2;i*i<=n;i++){
        if(f[i]){
            for(int j=i*i;j<=n;j+=i)f[j]=false;
        }
    }
    for(int i=2;i<=n;i++)if(f[i])pr.pb(i);
}

int main()
{
fast
ll t=1;
cin>>t;
while(t--)
{
  ll l,r;
  cin>>l>>r;
  vector<bool>v(r-l+1,true);
  vector<ll>pr;
  prime(sqrt(r),pr);
  for(auto x:pr){
      ll i=(l/x)*x;
      if(i<l)i+=x;
      if(i==x)i+=x;
      for(;i<=r;i+=x)v[i-l]=false;
  }
  ll ans=0LL;
  if(l==1)v[0]=false;
  for(int i=l;i<=r;i++)if(v[i-l])cout<<i<<"\n";
  cout<<"\n";
}
}
