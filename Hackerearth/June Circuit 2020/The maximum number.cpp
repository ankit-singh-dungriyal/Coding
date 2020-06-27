// Concept used : factorial, map, maths
// 'By Anki'
 
#include<bits/stdc++.h>
// #include<iostream>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define wr(i) cout<<#i<<" = "<<i<<",  ";
#define wre(i) cout<<#i<<"  =  "<<i<<endl;
#define all(v) v.begin(),v.end()
typedef long long ll;
#define lim 1000000007LL
typedef unsigned long long ull;
#define M 200005
using u64= uint64_t;


ll fact(ll n){
  if(n<0)return 1;
  ll ans=1;
  if(n==0||n==1)return 1;
  for(int i=2;i<=n;i++)ans*=i;
  return ans;
}

int main()
{
fast
ll t=1LL;
cin>>t;


while(t--)
{
  ll n,k;
  cin>>n>>k;
  vector<ll>v(n);
  ll ct[64],mx=0LL;
  memset(ct,0LL,sizeof(ct));
  for(auto &x:v)cin>>x;
  for(ll x:v){
    ll tmp=x;
    ll i=0;
    while(tmp){
      if(tmp&1)ct[i]++;
      i++;
      tmp/=2;
    }
    mx=max(mx,i);
  }
  if(mx<k)cout<<"-1\n";
  else
  {
    vector<ll>ans;
    for(ll i=1,j=1;j<=mx;i<<=1,j++)ans.pb(i*ct[j-1]);
    sort(all(ans),greater<int>());
    map<ll,ll>m;
    for(auto x:ans)m[x]++;
    // for(auto x:ans)cout<<x<<" ";
    ll res=1LL,i=0LL;
    // wr(ans[k-1])
    if(ans[k-1]==0){cout<<-1<<"\n";continue;}
    for(;i<ans.size();i++)if(ans[i]==ans[k-1])break;
    ll tmp=m[ans[k-1]];
    // wr(tmp)wr(k-i)
    res=fact(tmp)/(fact(k-i)*fact(tmp-(k-i)));
    cout<<res<<"\n";
    
  }
  
}

} 
