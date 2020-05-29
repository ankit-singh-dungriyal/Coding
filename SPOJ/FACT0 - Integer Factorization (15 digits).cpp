// Concept used: integer factorization
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
#define M 1000000000000005LL
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
 
 
int main()
{
fast
ll t=1LL;
// cin>>t;
while(1){
    map<ll,ll>m;
    ll n;
    cin>>n;
    // ll n1=n;
    if(n==0LL)break;
    for(ll i=2;(i*i)<=n;i++){
        while(n%i==0)
        {
            m[i]++;
            n/=i;
        }
        // wr(n);
    }
    if(n>1)m[n]++;
    for(auto x:m)cout<<x.first<<"^"<<x.second<<" ";
    cout<<"\n";
    m.clear();
}
} 
