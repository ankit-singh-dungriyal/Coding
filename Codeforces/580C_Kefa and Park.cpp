// C. Kefa and Park (Codeforces Round #321 (Div. 2))
// Concept used: dfs
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
 
ll ans=0LL;
ll m;
ll cat[M],ct[M];
vector<ll>v[M];
void dfs(ll n,ll p)
{
    if(cat[n])ct[n]=ct[p]+1;
    else ct[n]=0LL;
    // wr(n)wre(ct[n])
    if(ct[n]>m)return ;
    if(v[n].size()==1 && n)ans++;
    for(auto x:v[n]){
      if(x!=p)
      dfs(x,n);
    }
}
 
 
int main()
{
fast
ll t=1LL;
// cin>>t;
while(t--)
{
  ll n;
  cin>>n>>m;
  ll x,y;
  for(int i=0;i<n;i++)cin>>cat[i];
  for(int i=0;i<n-1;i++){
    cin>>x>>y;
    x--;y--;
    v[x].pb(y);
    v[y].pb(x);
  }
  ct[n+1]=0;
  dfs(0,n+1);
  cout<<ans;
}
} 
