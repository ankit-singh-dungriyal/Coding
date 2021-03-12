/*
Contest Id: 1366
Submission Id: 109778109
Date & Time: 12/03/2021 17:08:21
Tags/Concept used: ['constructive algorithms', 'math', 'number theory']
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
#define N 10000007
#define F first
#define S second
using u64= uint64_t;


vector<ll>prime(N,1);
vector<ll>ans(N,1),sub(N,1);
void pre(){
  prime[0]=prime[1]=0;
  for(int i=2;i<N;i++){
    if(prime[i]){
      for(int j=i*2;j<N;j+=i){
        prime[j]=0;
        if(sub[j]==1)sub[j]=i;
        else ans[j]*=i;
      }
    }
  }
}

void solve(){
  ll n;
  cin>>n;
  pre();
  vector<ll>v(n);
  for(auto &x:v)cin>>x;
  vector<ll>d1(n),d2(n);
  for(auto x:v){
    // cout<<ans[x]<<" ";
  }
  for(int i=0;i<n;i++){
    // wr(i)
    if(ans[v[i]]==1)d1[i]=d2[i]=-1;
    else{
      d1[i]=sub[v[i]];
      d2[i]=ans[v[i]];
    } 
  }
  for(auto x:d1)cout<<x<<" ";
  cout<<"\n";
  for(auto x:d2)cout<<x<<" ";
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
// cin>>t;

while(t--)
{
solve();  

}
 
} 