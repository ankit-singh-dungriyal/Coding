/*
Contest Id: 1490
Submission Id: 109096158
Date & Time: 04/03/2021 21:47:18
Tags/Concept used: ['binary search', 'data structures', 'greedy', 'math', 'sortings']
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
  vector<ll>v(n);
  map<ll,ll>m;
  ll mx_cnt=0;
  for(auto &x:v)cin>>x,m[x]++,mx_cnt=max(mx_cnt,m[x]);
  vector<ll>tmp(mx_cnt+1,0);
  for(auto x:m)tmp[x.S]++;
  vector<ll>sum(mx_cnt+1),l_sum(mx_cnt+1);
  l_sum[0]=0;
  for(int i=1;i<=mx_cnt;i++){
    if(tmp[i])l_sum[i]=l_sum[i-1]+tmp[i]*i;
    else l_sum[i]=l_sum[i-1];
  }
  sum[mx_cnt]=tmp[mx_cnt];
  for(int i=mx_cnt-1;i>=1;i--){
    if(tmp[i])sum[i]=sum[i+1]+tmp[i];
    else sum[i]=sum[i+1];
  }
  for(int i=mx_cnt-1;i>=1;i--)sum[i]+=sum[i+1];
  // for(int i=1;i<=mx_cnt;i++)l_sum[i]+=l_sum[i-1];
  sum[0]=0;
  ll ans=INT_MAX;
  for(int i=1;i<=mx_cnt;i++){
    if(i==mx_cnt)ans=min(ans,l_sum[i-1]);
    else ans=min(ans,sum[i+1]+l_sum[i-1]);
  }
  // for(auto x:sum)cout<<x<<" ";
  // cout<<"\n";
  // for(auto x:l_sum)cout<<x<<" ";
  cout<<ans<<"\n";

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