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
  for(auto &x:v)cin>>x;
  vector<ll>l(n),r(n);
  l[0]=r[n-1]=1;
  for(int i=1;i<n;i++){
    if(v[i]<v[i-1])l[i]=l[i-1]+1;
    else l[i]=1;
  }
  for(int j=n-2;j>=0;j--){
    if(v[j]<v[j+1])r[j]=r[j+1]+1;
    else r[j]=1;
  }
  vector<ll>ans(n);
  for(int i=0;i<n;i++)ans[i]=l[i]+r[i]-1;
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
