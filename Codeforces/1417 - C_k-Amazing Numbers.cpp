/*
Contest Id: 1417
Submission Id: 109697021
Date & Time: 11/03/2021 16:26:21
Tags/Concept used: ['data structures']
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
#define N 1000006
#define F first
#define S second
using u64= uint64_t;



void solve(){
  ll n;
  cin>>n;
  vector<ll>v(n);
  map<ll,vector<ll>>m;
  for(auto &x:v)cin>>x,m[x].pb(-1);
  for(int i=0;i<n;i++)m[v[i]].pb(i);
  for(auto x:v)m[x].pb(n);
  vector<ll>ans(n+1,INT_MAX);
  for(auto x:m){
      ll dif=0;
      vector<ll>vec=x.S;
      for(int i=1;i<vec.size();i++)dif=max(dif,vec[i]-vec[i-1]);
      // wr(dif)
      if(ans[dif]==INT_MAX)ans[dif]=x.F;
  }
  for(int i=1;i<=n;i++){
    ans[i]=min(ans[i],ans[i-1]);
  }
  for(auto &x:ans)if(x==INT_MAX)x=-1;
  for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
  cout<<"\n";

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