/*
Contest Id: 1497
Submission Id: 110206186
Date & Time: 17/03/2021 20:38:04
Tags/Concept used: ['constructive algorithms', 'greedy', 'math']
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
#define MAX 400005
#define N 10000007
#define F first
#define S second
using u64= uint64_t;


void solve(){
  ll n,m;
  cin>>n>>m;
  vector<ll>v(n);
  for(auto &x:v)cin>>x;
  for(auto &x:v)x=x%m;
  ll ans=n;
  vector<ll>tmp(m+1,0);
  for(auto x:v){
    tmp[x]++;
  }
  if(tmp[0])ans-=(tmp[0]-1);
  for(int i=1;i<=m/2;i++){
    if(i==m-i){
      if(tmp[i])ans-=(tmp[i]-1);
      continue;
    }
      if(tmp[i] && tmp[m-i]){
          if(tmp[i]==tmp[m-i])ans-=(2*tmp[i]-1);
          else ans-=2*min(tmp[i],tmp[m-i]);
      }
  }

  
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