/*
Contest Id: 1165
Submission Id: 109465708
Date & Time: 09/03/2021 17:35:51
Tags/Concept used: ['math', 'number theory']
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


ll lcm(ll a,ll b){
  return ((a*b)/__gcd(a,b));
}

void solve(){
  ll n;
  cin>>n;
  vector<ll>v(n);
  unordered_map<ll,bool>m;
  for(auto &x:v)cin>>x,m[x]=true;
  sort(all(v),greater<ll>());
  for(int i=0;i<n;i++){
    ll tmp=v[i];
    for(int j=2;j*j<=tmp;j++){
      if(tmp%j==0){
        if(!m[j]|| !m[tmp/j]){
          cout<<-1<<"\n";
          return;
        }
      }
    }
  }
  ll ans=v[0];

  for(ll i=1;i<n;i++)ans=lcm(ans,v[i]);
  if(ans==v[0])ans*=v[n-1];

  ll res=v[0]*v[n-1];
  if(ans!=res){
    cout<<-1<<"\n";
    return;
  }
  for(ll i=2;i*i<=ans;i++){
    if(ans%i==0){
      if(!m[i]||!m[ans/i]){
        cout<<-1<<"\n";
        return;
      }
    }
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