// By 'Anki'

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


void solve(){
    int n;
    cin>>n;
    vector<pair<ll,ll>>v;
    for(int i=0;i<n;i++){
        ll m;
        cin>>m;
        for(int j=0;j<m;j++){
            ll x,y;
            cin>>x>>y;
            v.pb(mp(x,y));
        }
    }
    sort(all(v));
    ll ans=1LL;
    for(auto x:v){
        if(ans<x.F)break;
        ans=max(ans,x.S+1);
    }
    if(ans>1000000)cout<<-1<<"\n";
    else cout<<ans<<"\n";
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
