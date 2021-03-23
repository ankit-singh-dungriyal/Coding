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



ll find(ll x,vector<ll>&id){
  while(id[x]!=x){
    id[x]=id[id[x]];
    x=id[x];
  }
  return x;
}

void uni(ll x,ll y,vector<ll>&id){
  ll a=find(x,id);
  ll b=find(y,id);
  id[a]=id[b];
}

void solve(){
  ll n,m;
  cin>>n>>m;
  vector<ll>id(n+1);
  for(int i=0;i<=n;i++)id[i]=i;
  ll x,y;
  for(int i=0;i<m;i++){
    cin>>x>>y;
    if(find(x,id)!=find(y,id))uni(x,y,id);
  }
  unordered_map<ll,ll>cnt;
  for(int i=1;i<=n;i++)cnt[find(id[i],id)]++;
  vector<ll>v;
  for(auto x:cnt)v.pb(x.S);
  ll ans=0;
  for(int i=0;i<v.size()-1;i++){
    for(int j=i+1;j<v.size();j++)ans+=v[i]*v[j];
  }
  // for(auto x:v)cout<<x<<" ";
  // cout<<"\n";
  // for(auto x:id)cout<<x<<" ";
  // cout<<"\n";
  ans*=2;
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
