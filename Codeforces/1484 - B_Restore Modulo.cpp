/*
Contest Id: 1484
Submission Id: 110650905
Date & Time: 21/03/2021 19:59:15
Tags/Concept used: ['implementation', 'math']
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
  ll n;
  cin>>n;
  vector<ll>v(n);
  ll mx=0;
  for(auto &x:v)cin>>x,mx=max(mx,x);
  if(n<=2){
    cout<<0<<"\n";
    return;
  }
  map<ll,ll>m;
  for(int i=1;i<n;i++)m[v[i]-v[i-1]]=1;
  if(m.size()>2){
    cout<<-1<<"\n";
    return;
  }
  if(m.size()==1){
    cout<<0<<"\n";
    return;
  }
  auto it=m.begin();
  ll x=it->first;
  it++;
  ll y=it->first;
  if((x>=0 && y>=0) ||(x<0 && y<0) ){
    cout<<-1<<"\n";
    return;
  }
  // wr(x)wr(y)
  ll ans=abs(x)+abs(y);
  if(ans<=mx){
    cout<<-1<<"\n";
  }
  else{
    cout<<ans<<" "<<y<<"\n";
  }

  
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