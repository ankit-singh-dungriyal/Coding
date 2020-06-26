// Concept used: dfs, path find, basic dp
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
#define lim 1000000007LL
typedef unsigned long long ull;
#define M 200005
using u64= uint64_t;
 
vector<ll>v[M];
map<pair<ll,ll>,ll>edg;
vector<ll>path;
vector<bool>vis(M);
bool dfs(ll fr,ll to){
  if(fr==to){
    path.pb(fr);
    // wr(fr)
    return true;
  }
  vis[fr]=true;
  for(auto x:v[fr]){
    if(!vis[x]){
    //   vis[x]=true;
     if(dfs(x,to)){
         path.pb(fr);
         return true;
     }
    }
  }
 return false;
}
map<ll,ll>ans;
void solve(ll n,ll pr){
  vis[n]=true;
  for(auto x:v[n]){
    if(x!=pr && vis[x]==false){
      ans[x]=ans[n]+edg[{x,n}];
      solve(x,n);
    }
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
 cin>>n;
 ll x,y;
 for(int i=0;i<n-1;i++){
   cin>>x>>y;
   v[--x].pb(--y);
   v[y].pb(x);
   edg[{x,y}]=0LL;
   edg[{y,x}]=0LL;
 }
 ll m,l;
//  vis.resize(n+1);
 cin>>m;
 for(int i=0;i<m;i++){
   cin>>x>>y>>l;
   vis.assign(n+1,false);
   x--;y--;
  //  wr(x)wr(y)
  path.clear();
   dfs(x,y);
    reverse(all(path));
//   for(auto x:path)cout<<x<<" ";
//   cout<<" @@ \n";
   for(ll i=0;i<path.size()-1;i++){
     edg[{path[i],path[i+1]}]+=min(i+1,l);
     edg[{path[i+1],path[i]}]+=min(i+1,l);
     l=max(0LL,(l-(i+1)));
   }
    path.clear();
 }
//  for(auto x:edg){
//    cout<<x.first.first<<", "<<x.first.second<<" = "<<x.second<<"\n";
//  }
vis.assign(n+1,false);
solve(0,-1);
ll res=0LL;
for(auto x:ans)res=max(res,x.second);
cout<<res<<"\n";
}
} 
