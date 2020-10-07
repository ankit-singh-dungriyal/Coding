
// By 'Anki'

// #include<boost/multiprecision/cpp_int.hpp> 
// using namespace boost::multiprecision; 

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
#define lim 1000000000000000000LL
typedef unsigned long long ull;
#define M 1003
#define N 30
#define F first
#define S second
using u64= uint64_t;

void solve(){
	ll n;
  cin>>n;
  vector<ll>v(n);
  for(auto &x:v)cin>>x;
  	ll dp[n+1];
  dp[0]=0;
  for(int i=0;i<n;i++)dp[i+1]=dp[i]+v[i];
  	for(int i=1;i<n;i++)if(dp[i-1]==dp[n]-dp[i]){cout<<v[i-1]<<"\n";return;}
  	cout<<"NO EQUILIBRIUM\n";
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
