// Concept used: sparse table, range maximum,minimum query
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
 
ll sp_mn[100005][20];
ll sp_mx[100005][20];

void sparse(vector<ll>v,ll n)
{   
    ll k=log2(n)+1;
    for(int i=0;i<n;i++)sp_mn[i][0]=v[i],sp_mx[i][0]=v[i];
    for(int j=1;j<=k;j++)
    for(int i=0;i+(1<<j)<=n;i++)sp_mn[i][j]=min(sp_mn[i][j-1],sp_mn[i+(1<<(j-1))][j-1]),
                                    sp_mx[i][j]=max(sp_mx[i][j-1],sp_mx[i+(1<<(j-1))][j-1]);
} 
ll mx_ans(ll l,ll r ){
    ll j=log2(r-l+1);
    return max(sp_mx[l][j],sp_mx[r-(1<<j)+1][j]);
}
ll mn_ans(ll l,ll r){
    ll j=log2(r-l+1);
    return min(sp_mn[l][j],sp_mn[r-(1<<j)+1][j]);
}
int main()
{
fast
ll t=1LL;

for(;t;t--){
  ll n;
  cin>>n;
  vector<ll>v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  sparse(v,n);
  ll q;
  cin>>q;
  while (q--)
  {
      ll l,r;
      cin>>l>>r;
      ll ans;
      ll mn=mn_ans(l,r);
      ll mx1=mx_ans(l,r);
      ll mx2=0;
      if(l>0)mx2=max(mx2,mx_ans(0,l-1));
      if(r<n-1)mx2=max(mx2,mx_ans(r+1,n-1));
    //   wr(mn)wr(mx1);wr(mx2)
    //   float tmp=max((float)(mx1-mn)/(float)2,(float)mx2);
    //   ans+=tmp+mn;
        ll ans1=mx2+mn;
        ll ans2=mx1+mn;
         ans=max(2*ans1,ans2);
        
      cout<<fixed<<setprecision(1);
      if(ans%2==0)cout<<ans/2<<".0\n";
      else cout<<ans/2<<".5\n";
  }
  
}
} 
