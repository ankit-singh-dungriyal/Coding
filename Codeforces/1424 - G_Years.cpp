/*
Contest Id: 1424
Submission Id: 110532307
Date & Time: 20/03/2021 16:34:50
Tags/Concept used: ['data structures', 'sortings']
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
  map<ll,ll>m;
  ll x,y;
  for(int i=0;i<n;i++)cin>>x>>y,m[x]++,m[y]--;
  ll ans=0,yr=0,sum=0;
  for(auto x:m){
      sum+=x.S;
      if(sum>ans)ans=sum,yr=x.F;
  }
  cout<<yr<<" "<<ans<<"\n";
  
  
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