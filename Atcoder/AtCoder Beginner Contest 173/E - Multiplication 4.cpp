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
#define M 10004
using u64= uint64_t;
 
ll mod(ll n){
  if(n<0)return n+lim;
  else return n%lim;
}
 
 
int main()
{
fast
ll t=1LL;
// cin>>t;
while(t--)
{
  ll n,k;
  cin>>n>>k;
  vector<ll>v(n);
  for(auto &x:v)cin>>x;
  sort(all(v));
  ll ans=1LL;
  if(v[n-1]<0 && k&1)for(ll i=0;i<k;i++)ans=(ans*v[n-i-1])%lim;
  else
  {
    ll i=0,j=n-1;
    while(k)
    {
      if(k>1){
        if(v[i]*v[i+1]>v[j]*v[j-1])ans=(((v[i]*v[i+1])%lim)*ans)%lim,i+=2,k-=2;
        else ans=(ans*v[j])%lim,j--,k--;
      }
      else ans=(ans*v[j])%lim,k--,j--;
      // wr(ans)
    }
    // cout<<(ans+lim)%lim;
    
  }
  cout<<(ans+lim)%lim;
  
 
}
} 
