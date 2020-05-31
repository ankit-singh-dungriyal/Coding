// Concept used: Integer factorization
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
 
int main()
{
fast
ll t=1LL;
 
for(;t;t--){
   ll n;
   cin>>n;
   map<ll,ll>m;
   for(ll i=2;i*i<=n;i++){
       while(n%i==0){
           m[i]++;
           n/=i;
       }
   }
   if(n>1)m[n]++;
   ll cn=0LL;
   for(auto x:m){
    //    wr(x.first)wre(x.second);
       ll tmp=0LL;
       ll i=x.second;
       while(i>0){
           tmp++;
           i-=tmp;
           if(i<0)break;
           cn++;
       }
   }
   cout<<cn;
} 
}
