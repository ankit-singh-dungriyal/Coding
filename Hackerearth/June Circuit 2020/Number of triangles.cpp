// Concept used: basic maths
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
#define M 200005
using u64= uint64_t;
 
int main()
{
fast
ll t=1LL;
cin>>t;
 
 
while(t--)
{
  ll n,a,b;
  cin>>n>>a>>b;
  n-=2;
  if(n==3){cout<<1<<"\n";continue;}
  ll ans=n*(n-4);
  ans=max(ans,0LL);
  ans+=n;
  ans-=(n-4);
  ll tmp=min(n+2-abs(a-b),abs(a-b));
  if(tmp==2)ans-=(n-3);
  else if(tmp>2)ans-=(n-4);
  // else ans-=(4*(n-4)+6);
  cout<<ans<<"\n";
}
}
