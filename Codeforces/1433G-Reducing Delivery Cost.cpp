// By 'Anki'
// Concept used: Graph, dijkstra, shortest path

#include<bits/stdc++.h>
// #include<thread>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define wr(i) cout<<#i<<" = "<<i<<",  ";
#define wre(i) cout<<#i<<"  =  "<<i<<endl;
#define all(v) v.begin(),v.end()
typedef long long ll;
#define lim 1000000000000000000LL
typedef unsigned long long ull;
#define M 1003
#define N 30
#define F first
#define S second
using u64= uint64_t;

vector<pair<ll,ll>>v[1001];

void dijkstra(ll n,vector<ll>&dis){
    priority_queue<ll,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
    pq.push(mp(0,n));
    dis[n]=0;
    while(!pq.empty()){
        ll u=pq.top().S;
        pq.pop();
        for(auto x:v[u]){
            if(dis[x.F]>dis[u]+x.S){
                dis[x.F]=dis[u]+x.S;
                pq.push(mp(dis[x.F],x.F));
            }
        }
    }
}


void solve(){
   ll n,m,k;
   cin>>n>>m>>k;
   vector<pair<ll,ll>>ed;
   ll x,y,w;
   for(int i=0;i<m;i++){
       cin>>x>>y>>w;
       v[--x].pb(mp(--y,w));
       v[y].pb(mp(x,w));
       ed.pb(mp(x,y));
   }
   vector<vector<ll>>dis(n,vector<ll>(n,INT_MAX));
   for(int i=0;i<n;i++){
       dijkstra(i,dis[i]);
   }

   vector<pair<ll,ll>>deli;
   for(int i=0;i<k;i++){
       cin>>x>>y;
       deli.pb(mp(--x,--y));
   }

//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++)cout<<dis[i][j]<<" ";
//        cout<<"\n";
//    }

   ll ans=lim;
   for(auto [x,y]:ed){
       ll sum=0;
       for(auto [v,u]:deli){
           ll tmp=dis[v][u];
           tmp=min(tmp,dis[v][x]+dis[y][u]);
           tmp=min(tmp,dis[v][y]+dis[x][u]);
           sum+=tmp;
       }
       ans=min(ans,sum);
   }
   cout<<ans<<"\n";

}

int main()
{
fast
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll t=1LL;
// cin>>t;
 
while(t--)
{
    solve();
}
 
} 
