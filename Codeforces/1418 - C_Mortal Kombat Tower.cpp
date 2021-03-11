/*
Contest Id: 1418
Submission Id: 109699620
Date & Time: 11/03/2021 16:55:51
Tags/Concept used: ['dp', 'graphs', 'greedy', 'shortest paths']
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
  for(auto &x:v)cin>>x;
  ll ans=v[0];
  for(int i=1;i<n;i++){
    if(v[i]){
      int j=i;
      while(j<n && v[j])j++;
      ans+=(j-i)/3;
      i=j-1;
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