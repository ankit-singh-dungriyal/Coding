// Concept used: sparse table
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
 
ll gcd(ll a,ll b){
    return b?gcd(b,a%b):a;
}
 
ll sp[100005][20];

void sparse(vector<ll>v,ll n)
{   
    ll k=log2(n)+1;
    for(int i=0;i<n;i++)sp[i][0]=v[i];
    for(int j=1;j<=k;j++)
    for(int i=0;i+(1<<j)<=n;i++)sp[i][j]=min(sp[i][j-1],sp[i+(1<<(j-1))][j-1]);
} 
ll mn_ans(ll l,ll r){
    ll j=log2(r-l+1);
    return min(sp[l][j],sp[r-(1<<j)+1][j]);
}
int main()
{
fast
ll t=1LL;
int cn=1;
for(cin>>t;t;t--){
  ll n,q;
  cin>>n>>q;;
  vector<ll>v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  sparse(v,n);
    cout<<"Scenario #"<<cn++<<":\n";
  while (q--)
  {
      ll l,r;
      cin>>l>>r;
      l--,r--;
      if(l>r)swap(l,r);
      cout<<mn_ans(l,r)<<"\n";
  }
}
} 
