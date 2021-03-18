/*
Contest Id: 1497
Submission Id: 110212031
Date & Time: 17/03/2021 20:50:56
Tags/Concept used: ['constructive algorithms', 'math']
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
  ll n,m;
  cin>>n>>m;
  if(n&1){
    cout<<1<<" "<<n/2<<" "<<n/2;
  }
  else{
    ll tmp=n/2;
    if(tmp &1){
      cout<<2<<" "<<tmp-1<<" "<<tmp-1;
    }
    else{
      cout<<tmp/2<<" "<<tmp/2<<" "<<tmp;
    }
  }
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