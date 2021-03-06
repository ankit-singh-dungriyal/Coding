/*
Contest Id: 1490
Submission Id: 109220451
Date & Time: 06/03/2021 17:33:39
Tags/Concept used: ['binary search', 'data structures', 'math']
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
  ll n,q,x;
  cin>>n>>q;
  vector<ll>sum(n);
  vector<ll>v(n);
  for(auto &x:v)cin>>x;
  sum[0]=(v[0]);
  for(int i=1;i<n;i++){
    sum[i]=sum[i-1]+v[i];
  }
  ll final_sum=sum[n-1];
  vector<pair<ll,ll>>as_sum;
  as_sum.pb(mp(sum[0],0));
  for(int i=1;i<n;i++){
    if(sum[i]<=as_sum.back().F)continue;
    as_sum.pb(mp(sum[i],i));
  }

  // for(auto x:as_sum)cout<<x.S<<" ";

  // ll final_sum=as_sum.back().F;
  // wr(final_sum)

  while(q--){
    ll x;
    cin>>x;
    
    if(as_sum.back().F>=x){
        pair<ll,ll>p={x,0};
        cout<<as_sum[lower_bound(all(as_sum),p)-as_sum.begin()].S<<" ";
        continue;
    }
    if(final_sum<=0){
      cout<<-1<<" ";
      continue;
    }
    ll ans=(x-as_sum.back().F+final_sum-1)/final_sum;
    x-=ans*final_sum;
    ans*=n;
    // wr(x)
    // wr(ans)
    // if(x%final_sum==0){
    //   ans-=(n-as_sum.back().S);
    //   cout<<ans<<" ";
    //   continue;
    // }
    pair<ll,ll>p={x,0};
    ans+=as_sum[lower_bound(all(as_sum),p)-as_sum.begin()].S;
    cout<<ans<<" ";

  }
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