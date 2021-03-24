/*
Contest Id: 1398
Submission Id: 110888099
Date & Time: 24/03/2021 16:58:33
Tags/Concept used: ['data structures', 'dp', 'math']
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
  string s;
  cin>>s;
  ll ans=0,sum=0;
  map<ll,ll>m;
  m[1]++;
  for(int i=0;i<n;i++){
      sum+=s[i]-'0';
      m[sum-i]++;
  }
  for(auto[x,y]:m)ans+=(y*(y-1))/2;
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