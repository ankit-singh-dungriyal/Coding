// B. Motarack's Birthday (Codeforces Round #619 (Div. 2))
// Concept used: Ternary search
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
 

ll func(ll m,vector<ll>v){
    ll ans=0LL;
    
    for(int i=0;i<v.size()-1;i++){
        ll a=v[i],b=v[i+1];
        if(a==-1)a=m;
        if(b==-1)b=m;
        ans=max(ans,abs(a-b));
    }
    return ans;
}

pair<ll,ll> ternary(ll l,ll r,vector<ll>v)
{
    while(r-l >2){
       ll m1=l+(r-l)/3;
        ll m2=r-(r-l)/3;
        if(func(m1,v)>func(m2,v))l=m1;
        else r=m2;
    }
    ll ans=func(l,v);
    ll k=l;
    for(int i=l;i<=r;i++)if(ans>func(i,v))ans=func(i,v),k=i;
    return {ans,k};
}

int main()
{
fast
ll t=1LL;

for(cin>>t;t;t--){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(auto &x:v)cin>>x;
    pair<ll,ll>ans=ternary(0,M,v);
    cout<<ans.first<<" "<<ans.second<<"\n";
   
}
}
