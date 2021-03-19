/*
Contest Id: 1499
Submission Id: 110437576
Date & Time: 19/03/2021 15:28:10
Tags/Concept used: ['combinatorics', 'constructive algorithms', 'math']
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
  ll n,k1,k2;
  cin>>n>>k1>>k2;
  ll w,b;
  cin>>w>>b;
  ll x=k1+k2;
  ll y=2*n-x;
  if(x&1)x--;
  if(y&1)y--;
  
  if(x>=2*w && y>=2*b)cout<<"YES\n";
  else cout<<"NO\n";
  
  
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