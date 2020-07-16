
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




int main()
{
fast
ll t=1LL;
cin>>t;
while(t--)
{
  ll n;
  cin>>n;
  map<ll,ll>m1,m2,m;
  vector<ll>v1,v2;
  ll x;ll mn=1000000000;
  for(int i=0;i<n;i++)cin>>x,m1[x]++,m[x]++,mn=min(mn,x);
  for(int i=0;i<n;i++)cin>>x,m2[x]++,m[x]++,mn=min(mn,x);
  bool f=false;
  for(auto x:m)if(x.second &1 ){f=true;break;}
  if(f){cout<<"-1\n";continue;}
  ll ans=0LL;
  for(auto x:m1)if(x.second>m2[x.first])for(int i=0;i<x.second-m2[x.first];i+=2)v1.pb(x.first);
  for(auto x:m2)if(x.second>m1[x.first])for(int i=0;i<x.second-m1[x.first];i+=2)v2.pb(x.first);
  sort(all(v2),greater<int>());
  // for(auto x:v1)cout<<x<<" ";
  // cout<<"\n";
  // for(auto x:v2)cout<<x<<" ";
  // cout<<"\n";
  for(int i=0;i<v1.size();i++){ans+=min(2*mn,min(v1[i],v2[i]));}
  cout<<ans<<"\n";

}
} 
