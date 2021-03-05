/*
Contest Id: 1478
Submission Id: 109137724
Date & Time: 05/03/2021 14:29:51
Tags/Concept used: ['brute force', 'greedy']
*/

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
#define lim 1000000000000LL
typedef unsigned long long ull;
#define mod 1000000007
#define M 31
#define N 30
#define F first
#define S second
using u64= uint64_t;



void solve(){
  ll n;
  cin>>n;
  ll x;
  map<ll,ll>m;
  ll ans=0;
  for(int i=0;i<n;i++)cin>>x,m[x]++;
  for(auto x:m)ans=max(ans,x.S);
  cout<<ans<<"\n";
  return;

}

int main()
{
fast
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif


ll t=1LL;
cin>>t;

while(t--)
{
solve();  

}
 
} 