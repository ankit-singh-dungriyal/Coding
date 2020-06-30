// Concept used: Bridge searching algorithm - (using dfs tree)
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
#define M 705
using u64= uint64_t;

vector<ll>v[M];
vector<bool>vis(M);
vector<ll>in(M),low(M);
vector<pair<ll,ll>>bridge;
ll timer=0LL;

void dfs_(ll n,ll pr){
  vis[n]=true;
  in[n]=low[n]=timer++;
  for(auto x:v[n]){
    if(x==pr)continue;
    if(vis[x])low[n]=min(in[x],low[n]);
    else
    {
      dfs_(x,n);
      low[n]=min(low[n],low[x]);
      if(low[x]>low[n]){
        ll a=x,b=n;
        if(a>b)swap(a,b);
        bridge.pb(mp(a,b));
      }
    }
    
  }
}

void dfs(ll n,ll pr)
{
  vis[n]=true;
  in[n]=low[n]=timer++;
  for(auto x:v[n])
  {
    if(x==pr)continue;
    if(vis[x])low[n]=min(low[n],in[x]);
      else
      {
        dfs(x,n);
        low[n]=min(low[n],low[x]);
        if(low[x]>in[n]){
          if(n<x)
          bridge.pb(mp(n,x));
          else bridge.pb(mp(x,n));
        }
      }
    
  }
}
int main()
{
// fast
ll t=1LL;
cin>>t;
ll cs=1LL;
while(t--)
{
 ll n,m;
 cin>>n>>m;
 ll x,y;
   bridge.clear();
 timer=0LL;
 for(int i=1;i<n+1;i++)v[i].clear();
 for(int i=1;i<n+1;i++)in[i]=0,low[i]=0,vis[i]=false;
 for(int i=1;i<=m;i++)
 {
   cin>>x>>y;
   v[x].pb(y);
   v[y].pb(x);
 }
 dfs(1,-1);
 sort(all(bridge));
 cout<<"Caso #"<<cs++<<"\n";
 if(bridge.size()==0){cout<<"Sin bloqueos\n";continue;}
 cout<<bridge.size()<<"\n";
  for(auto k:bridge){
    cout<<k.first<<" "<<k.second<<"\n";
  }

}
} 
