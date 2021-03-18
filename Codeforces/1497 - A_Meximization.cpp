/*
Contest Id: 1497
Submission Id: 110188934
Date & Time: 17/03/2021 20:13:34
Tags/Concept used: ['brute force', 'data structures', 'greedy', 'sortings']
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
  sort(all(v));
  vector<ll>tmp;
  map<ll,ll>m;
  for(auto x:v){
    if(m[x]){
      tmp.pb(x);
      continue;
    }
    cout<<x<<" ";
    m[x]=1;
  }
  for(auto x:tmp)cout<<x<<" ";
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