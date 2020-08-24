// By 'Anki'
// Concept used: graph, dfs, dp

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
#define M 200005LL
#define F first
#define S second
using u64= uint64_t;

vector<vector<ll>>v(M);
vector<ll>cnt,k;
ll n;
ll dfs(ll u,ll p){
    ll tmp=1;
    for(auto x:v[u]){
        if(x!=p){
            tmp+=dfs(x,u);
            // tmp++;
        }
    }
    // wr(u)wr(tmp)
    if(u!=1)
    cnt.pb(tmp*(n-tmp));
    return tmp;
}

int main()
{
fast
ll t=1LL;
cin>>t;

while(t--)
{
// ll n;
cin>>n;
for(int i=0;i<=n;i++)v[i].clear();
cnt.clear();
k.clear();
ll x,y;
for(int i=1;i<n;i++){
    cin>>x>>y;
    v[x].pb(y);
    v[y].pb(x);
}
ll m;
cin>>m;
for(int i=0;i<m;i++){cin>>x;k.pb(x);}
// sort(all(k));
if(m<n-1)for(int i=0;i<(n-1-m);i++)k.pb(1);
sort(all(k));
if(m>n-1){
    ll tmp=1;
    for(int i=n-2;i<m;i++)tmp=(tmp*k[i])%lim;
    k[n-2]=tmp;
}
dfs(1,-1);
// for(auto x:cnt)cout<<x<<" ";
// cout<<"\n";
sort(all(cnt));
// reverse(all(cnt));
// for(auto x:k)cout<<x<<" ";
// cout<<"\n";
// for(auto x:cnt)cout<<x<<" ";
// cout<<"\n";
ll ans=0LL;
for(int i=n-2;i>=0;i--)ans=(ans+(cnt[i]*k[i])%lim)%lim;
cout<<ans<<"\n";
}
} 
