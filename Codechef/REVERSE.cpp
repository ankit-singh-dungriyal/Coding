// By "ANKI"
// Concept used: dijkstra, 01BFS, graphs

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
#define M 100005LL
#define F first
#define S second
using u64= uint64_t;


vector<pair<ll,ll>>v[M];
vector<ll>dis(M,lim);

void bfs01(ll n){
    deque<ll>q;
    q.push_front(n);
    dis[n]=0;
    while (!q.empty())
    {
        ll u=q.front();
        q.pop_front();
        for(auto x:v[u]){
            if(dis[x.first]>dis[u]+x.second){
                dis[x.first]=dis[u]+x.second;
                if(x.second==1)q.push_back(x.first);
                else q.push_front(x.first);
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
    v[x].pb(mp(y,0));
    v[y].pb(mp(x,1));
}
bfs01(1);
if(dis[n]==lim)cout<<-1;
else
cout<<dis[n];


}
} 
