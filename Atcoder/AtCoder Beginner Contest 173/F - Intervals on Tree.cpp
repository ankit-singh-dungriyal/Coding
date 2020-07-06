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
  ll n;
  cin>>n;
  ll x,y;
  ll ans=0LL;
  for(int i=1;i<=n;i++)ans+=i*(n-i+1);
  // for(int i=1;i<=n;i++)ans+=((i)*(i+1))/2;
  // wr(ans)
  for(int i=1;i<n;i++){
    cin>>x>>y;
    ans-=(n-max(x,y)+1)*min(x,y);
  }
  cout<<ans<<"\n";
 
}
} 
