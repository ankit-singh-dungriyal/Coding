/*
Contest Id: 1474
Submission Id: 109623953
Date & Time: 10/03/2021 19:37:45
Tags/Concept used: ['binary search', 'constructive algorithms', 'greedy', 'math', 'number theory']
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


vector<bool>prime(N,true);
vector<ll>v;

void pre(){
  prime[0]=false;
  prime[1]=false;
  for(int i=2;i<N;i++){
    for(int j=i*2;j<N;j+=i){
      prime[j]=false;
    }
  }
  v.pb(1);
  for(int i=0;i<N;i++)if(prime[i])v.pb(i);
}

void solve(){
  ll d;
  cin>>d;
  ll ans=1;
  ll cn=0,tmp=1;
  for(int i=0;cn<2;i++){
    if(v[i]-tmp>=d){
      ans*=v[i];
      tmp=v[i];
      cn++;
    }
  }
  // for(int i=0;i<20;i++)cout<<v[i]<<" ";
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