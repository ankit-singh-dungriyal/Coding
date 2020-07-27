// Concept used: dp
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
#define MIN -1000000007LL
typedef unsigned long long ull;
#define M 10004
using u64= uint64_t;
 
/*
map<pair<ll,ll>,ll>mapi;
vector<ll>v;
ll m,k,n;
 
ll solve(ll l, ll ind,ll j){
  if(l==k){
    ll ans=MIN;
    for(int i=ind;i<=min(n-1,ind+j);i++)
    ans=max(ans,v[i]);
    return ans*(l%m);
  }
  // if(mapi[{v[ind],l}])return mapi[{v[ind],l}];
  ll ans=MIN;
  ll tmp=0LL;
  for(int i=ind;i<=min(n-2,ind+j);i++){
      if(mapi[{v[i],l}])ans=max(ans,mapi[{v[i],l}]);
      else{
      mapi[{v[i],l}]=v[i]*(l%m)+solve(l+1,i+1,j-tmp);
      ans=max(ans,mapi[{v[i],l}]);
      }
      tmp++;
  }
  return ans;
}
*/
 
int main()
{
fast
ll t=1LL;
// cin>>t;
while(t--)
{
  ll n,k,m;
cin>>n>>k>>m;
vector<ll>v(n);
for(auto &x:v)cin>>x;
ll dp[k+1][n];
if(k==0){cout<<0<<"\n";continue;}
if(m==1){cout<<0<<"\n";continue;}
memset(dp,0,sizeof(dp));
dp[1][0]=v[0];
for(int i=1;i<n;i++)dp[1][i]=max(dp[1][i-1],v[i]);
for(int i=2;i<=k;i++){
  // ll mx=MIN;
  ll tmp=MIN;
  for(int j=i-1;j<n;j++){
    // mx=max(mx,v[j]);
    dp[i][j]=max(tmp,dp[i-1][j-1]+(i%m)*v[j]);
    tmp=max(tmp,dp[i][j]);
  }
}
 
/*
for(int i=1;i<=k;i++){
  for(int j=0;j<n;j++)cout<<dp[i][j]<<" ";
  cout<<"\n";
}
*/
 
cout<<dp[k][n-1]<<"\n";
}
}
