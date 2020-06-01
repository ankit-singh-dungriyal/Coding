// Concept used: sparse table, range maximum query
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

ll a[500005][80];
void sparse(vector<ll>v)
{
    ll n=v.size();
    for(int i=0;i<n;i++)a[i][0]=v[i];
    ll k=log2(n)+1;
    for(int i=1;i<=k;i++)
    for(int j=0;j+(1<<i)<=n;j++)a[j][i]=max(a[j][i-1],a[j+(1<<(i-1))][i-1]);
}
int main()
{
fast
ll t=1LL;

for(;t;t--){
    ll n,m;
    cin>>n>>m;
    vector<ll>v(n);
    for(auto &x:v)cin>>x;
    sparse(v);
    ll k=log2(n)+1;
    ll cn=0LL;
    while (m--)
    {
        ll l,r,l1,r1;
        cin>>l>>r;
        l--,r--;
        if(l==r){cn++;continue;}
        else if(l>r)l1=r+1,r1=l;
        else l1=l,r1=r-1;
        ll ans=-1;
        for(int i=k;i>=0;i--)
        if((1<<i)<=(r1-l1+1))ans=max(ans,a[l1][i]),l1+=(1<<i);
        if(ans<=v[l])cn++;
    }
    cout<<cn<<"\n";
}
} 
