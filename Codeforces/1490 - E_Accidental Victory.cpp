/*
Contest Id: 1490
Submission Id: 109077492
Date & Time: 04/03/2021 17:48:45
Tags/Concept used: ['binary search', 'data structures', 'greedy']
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
  map<ll,vector<ll>>m;
  for(auto &x:v)cin>>x;
  for(int i=0;i<n;i++)m[v[i]].pb(i+1);
  sort(all(v));
  vector<ll>sum(n);
  sum[0]=v[0];
  for(int i=1;i<n;i++)sum[i]=sum[i-1]+v[i];
  vector<ll>ans;
  for(int i=n-2;i>=0;i--){
    if(sum[i]>=v[i+1]){
      ans.pb(m[v[i]].back());
      m[v[i]].pop_back();
    }
    else break;
  }
  ans.pb(m[v[n-1]].back());
  m[v[n-1]].pop_back();
  sort(all(ans));
  cout<<ans.size()<<"\n";
  for(auto x:ans)cout<<x<<" ";
  cout<<"\n";


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