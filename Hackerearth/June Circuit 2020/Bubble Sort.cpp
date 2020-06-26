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
 
ll solve(ll n,vector<ll>v)
{
  ll ct=0LL;
  bool f=true;
  while(f){
    f=false;
    ct++;
    for(int i=0;i<n-1;i++){
      if(v[i]>v[i+1])swap(v[i],v[i+1]),f=true;
    }
  }
  return ct;
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
  vector<ll>v(n);
  for(auto &x:v)cin>>x;
  cout<<solve(n,v);
}
} 
