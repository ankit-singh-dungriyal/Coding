//  By 'Anki'
// Concept used: dfs, priority queue, data structure

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
#define lim 10000000000012LL
typedef unsigned long long ull;
#define M 200005
using u64= uint64_t;

vector<pair<ll,ll>>v[M];
vector<bool>vis(M);
vector<ll>p(M),cnt(M);
map<pair<ll,ll>,ll>m;

void dfs(ll n,ll par){
    vis[n]=true;
    p[n]=par;
    cnt[n]=0LL;
    for(auto x:v[n]){
        if(!vis[x.first]){
            dfs(x.first,n);
            cnt[n]+=cnt[x.first];
        }
        
    }
    if(v[n].size()==1)cnt[n]=1;
}

struct comp{
constexpr bool operator()(pair<ll,ll> const& a,pair<ll,ll>const& b)const noexcept{
    ll x=(a.second/2)*a.first;
    ll y=(b.second/2)*b.first;
    x=a.second*a.first-x;
    y=b.first*b.second-y;
    return x<y;
}
};

int main()
{
fast
ll t=1LL;
cin>>t;
while(t--)
{
ll n,s;
cin>>n>>s;
for(int i=0;i<=n;i++)v[i].clear();
m.clear();
vis.clear();
p.clear();
cnt.clear();
vis.resize(n+1,false);
p.resize(n+1);
cnt.resize(n+1);
ll x,y,w;
for(int i=0;i<n-1;i++){
cin>>x>>y>>w;
v[x].pb(mp(y,w));
v[y].pb(mp(x,w));
m[mp(x,y)]=w;
m[mp(y,x)]=w;
}
dfs(1,-1);
ll sum=0LL;
priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,comp>pq;
for(int i=2;i<=n;i++){
    ll x=cnt[i]*m[{i,p[i]}];
    // wr(x)
    sum+=x;
    pq.push(mp(cnt[i],m[{i,p[i]}]));
}
ll ans=0LL;
// cout<<pq.top().first<<" , "<<pq.top().second<<"\n";
// wre(sum)
while(sum>s){
    pair<ll,ll>tmp=pq.top();
    ll x=tmp.first*(tmp.second/2);
    pq.pop();
    pq.push(mp(tmp.first,tmp.second/2));
    // wr(x)
    x=tmp.first*tmp.second-x;
    sum-=x;
    ans++;
}
cout<<ans<<"\n";
}
} 


