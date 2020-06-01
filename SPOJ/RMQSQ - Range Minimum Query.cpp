// Concept used: sparse tree, range minimum query
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
#define M 100006LL
using u64= uint64_t;
// using i128= __int128;
// typedef unsigned int uint128_t __attribute__((mode(TI)));

/*
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
 
ll phi(ll n){
    ll res=n;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0)n/=i;
            res-=res/i;
        }
    }
    if(n>1)res-=res/n;
    return res;
}
*/

ll a[100000][70];
void sparse(vector<ll>v)
{
    ll n=v.size();
    for(int i=0;i<n;i++)a[i][0]=v[i];
    ll k=log2(n)+1;
    for(int i=1;i<=k;i++)
    for(int j=0;j+(1<<i)<=n;j++)a[j][i]=min(a[j][i-1],a[j+(1<<(i-1))][i-1]);
}
int main()
{
fast
ll t=1LL;

for(;t;t--){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(auto &x:v)cin>>x;
    sparse(v);
    ll q;
    ll k=log2(n)+1;
    cin>>q;
    while (q--)
    {
        ll l,r;
        cin>>l>>r;
        ll ans=1000000000000000000LL;
        int j=log2(r-l+1);
        ans=min(a[l][j],a[r-(1<<j)+1][j]);
        
        // ** answer can be determined by using this approach also (but be careful in regarding the constraints) **
        // for(int i=k;i>=0;i--)
        // if((1<<i)<=(r-l+1))ans=min(ans,a[l][i]),l+=(1<<i);
        
        cout<<ans<<"\n";
    }
}
} 
