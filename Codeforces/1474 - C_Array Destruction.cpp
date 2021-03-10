/*
Contest Id: 1474
Submission Id: 109641898
Date & Time: 10/03/2021 22:08:06
Tags/Concept used: ['brute force', 'constructive algorithms', 'data structures', 'greedy', 'implementation', 'sortings']
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
  n*=2;
  vector<ll>v(n);
  for(auto &x:v)cin>>x;
  sort(all(v));

  for(int i=0;i<n-1;i++){
    ll val=v[n-1]+v[i];
    multiset<ll>ms;
    vector<pair<ll,ll>>ans;
    bool f=true;
    // wr(val);
    for(auto x:v)ms.insert(x);
    while(!ms.empty()){
      auto it=ms.end();
      it--;
      ll k=*it;
      ms.erase(it);
      if(ms.find(val-k)==ms.end()){
        f=false;
        break;
      }
        ms.erase(ms.find(val-k));
        ans.pb(mp(k,val-k));
        val=k;
    }
    // wr(val)
    if(f){
    cout<<"YES\n";
    cout<<v[n-1]+v[i]<<"\n";
    for(auto x:ans)cout<<x.first<<" "<<x.second<<"\n";
    return;
    }

  }
  cout<<"NO\n";

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