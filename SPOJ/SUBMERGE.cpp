// Cutvertex or finding articulation point - (using dfs tree)
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


vector<ll>v[M];
vector<bool>vis(M);
vector<ll>low(M),tin(M);
ll timer=0LL;
set<ll>s;

void dfs(ll n,ll p){
    vis[n]=true;
    tin[n]=low[n]=timer++;
    ll child=0LL;
    for(auto x:v[n]){
        if(x==p)continue;
        if(vis[x])low[n]=min(low[n],tin[x]);
        else
        {
            dfs(x,n);
            child++;
            low[n]=min(low[n],low[x]);
            if(low[x]>=tin[n] && p!=-1)s.insert(n);
        }
        
    }
    if(p==-1 && child>1)s.insert(1);
}


int main()
{
fast
ll t=1LL;
// cin>>t;
while(t)
{
    ll n,m,x,y;
    cin>>n>>m;
    s.clear();
    timer=0LL;
    if(!n && !m)break;
    for(int i=0;i<=n;i++)v[i].clear();
    vis.assign(n+1,false);
    tin.assign(n+1,-1);
    low.assign(n+1,-1);
    for(int i=0;i<m;i++){
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }
    dfs(1,-1);
    cout<<s.size()<<"\n";

}
} 
