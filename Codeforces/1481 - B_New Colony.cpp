/*
Contest Id: 1481
Submission Id: 109387576
Date & Time: 08/03/2021 15:34:44
Tags/Concept used: ['brute force', 'greedy', 'implementation']
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

  ll n,k;
  cin>>n>>k;
  vector<ll>v(n);
  for(auto &x:v)cin>>x;
  ll sum=0,ans=-1;
  while(sum<k){
    int i=1;
    while(i<n){
      if(v[i]-v[i-1]>0){
        sum++;
        v[i-1]++;
        break;
      }
      i++;
    }
    if(i==n){
      ans=-1;
      break;
    }
    if(sum>=k){
      ans=i;
      break;
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