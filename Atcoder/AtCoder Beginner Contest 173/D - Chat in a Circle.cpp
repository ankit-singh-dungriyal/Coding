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
// cin>>t;
while(t--)
{
   ll n;
   cin>>n;
   vector<ll>v(n);
   for(auto &x:v)cin>>x;
   sort(all(v),greater<int>());
   ll ans=v[0];
   ll k=n-2;
   for(int i=1;i<n;i++){
     if(!k)break;
     ans+=v[i];
     if(--k <=0)break;
     ans+=v[i];
     if(--k<=0)break;
   }
   cout<<ans<<"\n";
}
} 
