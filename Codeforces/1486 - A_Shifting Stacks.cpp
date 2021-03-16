/*
Contest Id: 1486
Submission Id: 110129587
Date & Time: 16/03/2021 21:52:32
Tags/Concept used: ['greedy', 'implementation']
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
  ll n;
  cin>>n;
  vector<ll>v(n);
  for(auto &x:v)cin>>x;
  vector<ll>sum(n,0),req(n,0);
  sum[0]=v[0];
  req[0]=0;
  for(int i=1;i<n;i++){
    sum[i]=sum[i-1]+v[i];
    req[i]=req[i-1]+i;
  }

  for(int i=1;i<n;i++){
    if(req[i]>sum[i]){
      cout<<"NO\n";
      return;
    }
  }
  cout<<"YES\n";
  
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