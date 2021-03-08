/*
Contest Id: 1481
Submission Id: 109386201
Date & Time: 08/03/2021 15:12:02
Tags/Concept used: ['greedy', 'strings']
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

  ll x,y;
  cin>>x>>y;
  string s;
  cin>>s;
  map<char,ll>m;
  for(auto x:s){
    if(x=='R' || x=='U')m[x]++;
    else m[x]--;
  }
  bool f1=false,f2=false;
  if(x<0 && m['L']<=x)f1=true;
  if(x>=0 && m['R']>=x)f1=true;
  if(y<0 && m['D']<=y)f2=true;
  if(y>=0 && m['U']>=y)f2=true;
  if(f1 && f2)cout<<"YES\n";
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