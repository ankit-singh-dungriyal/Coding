// concept used: basic maths
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
 


int main()
{
fast
ll t=1LL;
for(cin>>t;t;t--){
ll n,k;
cin>>n>>k;
ll ans=0LL;
ll x;for(int i=0;i<n;i++)cin>>x,ans+=max(0LL,x-k);
cout<<ans<<"\n";
}

} 
