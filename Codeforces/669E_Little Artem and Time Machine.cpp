// E. Little Artem and Time Machine (Codeforces Round #348 (VK Cup 2016 Round 2, Div. 2 Edition))
// Concept used: Fenwick tree, Range queries
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
#define M 1000000000L
using u64= uint64_t;
 
map<ll,map<ll,ll>>m;
ll n;
void update(ll q,ll x,ll val)
{
    if(q==1)
    for(;x<=M;x+=x&(-x))m[x][val]++;
    else for(;x<=M;x+=x&(-x))m[x][val]--;
}
ll show(ll x,ll val){
    ll sum=0LL;
    for(;x>0;x-=x&(-x))sum+=m[x][val];
    return sum;
}
int main()
{
fast
ll t=1LL;

for(;t;t--){
    cin>>n;
    for(int k=0;k<n;k++){
        ll q,x,val;
        cin>>q>>x>>val;
        if(q==3)cout<<show(x,val)<<"\n";
        else update(q,x,val);
    }
    
}
}
