/*
Contest Id: 1496
Submission Id: 109959532
Date & Time: 14/03/2021 15:25:54
Tags/Concept used: ['geometry', 'greedy', 'sortings']
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


void solve(){
  ll n;
  cin>>n;
  vector<ll>a,b;
  ll x,y;
  for(int i=0;i<2*n;i++){
    cin>>x>>y;
    x=abs(x);
    y=abs(y);
    if(x)a.pb(x);
    else b.pb(y);
  }
  sort(all(a));
  sort(all(b));
  long double ans=0;
  long double tmp;
  for(int i=0;i<n;i++){
    long double p=a[i],q=b[i];
    tmp=sqrt(p*p +q*q);
    ans+=tmp;
  }
  cout<<setprecision(16);
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