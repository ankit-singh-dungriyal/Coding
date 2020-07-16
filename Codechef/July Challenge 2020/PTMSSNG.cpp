
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
#define M 10004
using u64= uint64_t;




int main()
{
fast
ll t=1LL;
cin>>t;
while(t--)
{
   ll n;
   cin>>n;
   ll a,b;
   map<ll,ll>x,y;
   for(int i=0;i<4*n-1;i++){
       cin>>a>>b;
       x[a]++;y[b]++;
   }
   for(auto k:x)if(k.second&1){cout<<k.first<<" ";break;}
   for(auto k:y)if(k.second & 1){cout<<k.first<<"\n";break;}
}
} 
