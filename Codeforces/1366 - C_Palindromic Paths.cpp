/*
Contest Id: 1366
Submission Id: 109774290
Date & Time: 12/03/2021 16:16:45
Tags/Concept used: ['greedy', 'math']
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
  ll n,m;
  cin>>n>>m;
  vector<vector<int>>v(n,vector<int>(m));
  ll sz=n+m-2;
  vector<vector<ll>>cnt(sz+1,vector<ll>(2,0));
  for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>v[i][j],cnt[i+j][v[i][j]]++;
  ll ans=0;
  for(int i=0;i<(sz+1)/2;i++){
    ans+=min(cnt[i][0]+cnt[sz-i][0],cnt[i][1]+cnt[sz-i][1]);
    // wr(ans)
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