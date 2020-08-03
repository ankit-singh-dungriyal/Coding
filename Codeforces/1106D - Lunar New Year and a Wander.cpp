// By "ANKI"
// Concept used: Graphs, priority que, bfs
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
#define lim 100000000000014LL
typedef unsigned long long ull;
#define M 300005
#define F first
#define S second
using u64= uint64_t;
 
/*
vector<pair<ll,ll>>v[M];
vector<ll>dis(M,lim);
vector<ll>path(M,-1);
void dijkstra(ll n){
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
    // priority_queue<pair<ll,ll>>pq;
    pq.push(mp(0,n));
    dis[n]=0LL;
    while(!pq.empty()){
        ll u=pq.top().second;
        pq.pop();
        for(auto x:v[u]){
            if(dis[x.first]>dis[u]+x.second){
                dis[x.first]=dis[u]+x.second;
                path[x.first]=u;
                pq.push(mp(dis[x.first],x.first));
            }
        }
    }
}
*/

vector<ll>v[M];
vector<ll>ans;
vector<bool>vis(M,false);

void solve(ll n){
    vis[n]=true;
    priority_queue<ll,vector<ll>,greater<ll>>pq;
    pq.push(n);
    while(!pq.empty()){
        ll u=pq.top();
        // vis[u]=true;
        ans.pb(u);
        pq.pop();
        for(auto x:v[u]){
            if(!vis[x]){
                vis[x]=true;
                pq.push(x);
            }
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
ll n,m,x,y;
cin>>n>>m;
for(int i=0;i<m;i++){
    cin>>x>>y;
    v[x].pb(y);
    v[y].pb(x);
}
solve(1);
for(auto x:ans)cout<<x<<" ";
cout<<"\n";
}
} 
