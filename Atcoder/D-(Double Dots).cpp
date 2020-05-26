// Concepts used: Bfs
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
// #define lim 10LL
#define M 1000006
 
ll gcd(ll a,ll b){
    return b?gcd(b,a%b):a;
}
 
ll fact(ll n)
{
    ll ans=1LL;
    while(n)
    ans*=(n--);
    return ans;

}

vector<ll>vis;
void bfs(ll x,vector<ll>v[]){
    queue<ll>q;
    q.push(x);
    while (!q.empty())
    {
        ll s=q.front();
        q.pop();
        for(auto x:v[s])
        if(!vis[x])vis[x]=s,q.push(x);
    }
}

int main()
{
fast
ll t=1;
// cin>>t;
while(t--)
{
    ll n,k;
    cin>>n>>k;
    vis.resize(n+1,0LL);
    vector<ll>v[n+1];
    ll x,y;
    for(int i=1;i<=k;i++){
        cin>>x>>y;
        v[x].pb(y);v[y].pb(x);
    }
    bfs(1LL,v);
    bool f=true;
    for(int i=2;(i<=n)&&f;i++)if(!vis[i])f=false;
    if(!f)cout<<"No\n";
    else{
        cout<<"Yes\n";
        for(int i=2;i<=n;i++)cout<<vis[i]<<"\n";
    }

    
}
} 
