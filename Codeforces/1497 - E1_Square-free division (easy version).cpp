/*
Contest Id: 1497
Submission Id: 110306471
Date & Time: 18/03/2021 16:57:52
Tags/Concept used: ['data structures', 'dp', 'greedy', 'math', 'number theory']
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

vector<bool>prime(N,true);
void pre(){
  for(int i=2;i<N;i++){
    if(prime[i])
    for(int j=i*2;j<N;j+=i)prime[j]=false;
  }
}

void solve(){
  ll n,k;
  cin>>n>>k;
  vector<ll>v(n),id(n);
  for(auto &x:v)cin>>x;
  for(int i=0;i<n;i++){
    ll tmp=1,x=v[i];
    if(prime[x]){
      id[i]=x;
      continue;
    }
    unordered_map<ll,ll>um;
    for(int i=2;i*i<=x;i++){
      while(x%i==0){
        um[i]=(um[i]+1)%2;
        x/=i;
      }
      if(prime[x])break;
    }
    if(x)um[x]=(um[x]+1)%2;
    for(auto ele:um)if(ele.S)tmp*=ele.F;
    id[i]=tmp;
  }
  ll ans=1;
  unordered_map<ll,ll>m;
  for(int i=0;i<n;i++){
    if(m[id[i]]){
      ans++;
      m.clear();
    }
    m[id[i]]=1;
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

pre();
ll t=1LL;
cin>>t;

while(t--)
{
solve();  

}
 
} 