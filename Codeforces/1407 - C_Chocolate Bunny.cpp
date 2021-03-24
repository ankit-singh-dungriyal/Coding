/*
Contest Id: 1407
Submission Id: 110884185
Date & Time: 24/03/2021 16:08:30
Tags/Concept used: ['constructive algorithms', 'interactive', 'math', 'two pointers']
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
  vector<ll>ans(n,-1);
  int i=1,j=2;
  while(j<=n){
      int a,b;
      cout<<"? "<<i<<" "<<j<<"\n";
      cin>>a;
      cout<<"? "<<j<<" "<<i<<"\n";
      cin>>b;
      if(a>b)ans[i-1]=a,i=j;
      else ans[j-1]=b;
      j++;
  }
  for(auto &x:ans)if(x==-1)x=n;
  cout<<"! ";
  for(auto x:ans)cout<<x<<" ";

}

int main()
{
// fast
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