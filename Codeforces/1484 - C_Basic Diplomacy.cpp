/*
Contest Id: 1484
Submission Id: 110699253
Date & Time: 22/03/2021 10:37:03
Tags/Concept used: ['combinatorics', 'flows', 'greedy', 'implementation']
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
  ll n,m,k,ele;
  cin>>n>>m;
  // vector<ll>cnt(n+1,0);
  map<ll,ll>a;
  vector<ll>cnt(n+1,0);
  vector<vector<ll>>v(m);
  ll mx=(m+1)/2;
  for(int i=0;i<m;i++){
    cin>>k;
    for(int j=0;j<k;j++){
      cin>>ele;
      v[i].pb(ele);
      // cnt[ele]++;
    }
    if(k==1)cnt[v[i][0]]++;
  }

  bool check=false;
  for(auto x:cnt){
    if(x>mx)check=true;
  }
  if(check){
    cout<<"NO\n";
    return;
  }
  vector<ll>ans(m);
  for(int i=0;i<m;i++){
    ans[i]=v[i][0];
    a[ans[i]]++;
  }
  for(int i=0;i<m;i++){
    if(a[ans[i]]>mx){
      ll mn=INT_MAX;
      for(auto x:v[i])mn=min(mn,a[x]);
      if(mn<mx){
        for(auto x:v[i]){
          if(mn==a[x]){
            a[ans[i]]--;
            ans[i]=x;
            a[x]++;
            break;
          }
        }
      }
    }
  }
  cout<<"YES\n";
  for(auto x:ans)cout<<x<<" ";
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