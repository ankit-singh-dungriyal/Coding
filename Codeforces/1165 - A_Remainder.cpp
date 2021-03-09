/*
Contest Id: 1165
Submission Id: 109456733
Date & Time: 09/03/2021 15:40:57
Tags/Concept used: ['implementation', 'math']
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
  ll n,x,y;
  cin>>n>>x>>y;
  string s;
  cin>>s;
  ll ans=0;
  ll l=s.length();
  for(int i=l-1;i>=0;i--){
    if(!x)break;
    if(s[i]=='1')ans++;
    x--;
  }
  if(s[l-1-y]=='1')ans--;
  else ans++;
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
// cin>>t;

while(t--)
{
solve();  

}
 
} 