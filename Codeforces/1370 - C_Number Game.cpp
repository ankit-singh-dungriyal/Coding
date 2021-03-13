/*
Contest Id: 1370
Submission Id: 109910710
Date & Time: 13/03/2021 22:00:54
Tags/Concept used: ['games', 'math', 'number theory']
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
  string a="Ashishgup",b="FastestFinger";
  if((n&1 &&n!=1) ||(n==2)){
    cout<<a<<"\n";
    return;
  }
  else{
    for(ll i=3;i*i<=n;i++){
      if(n%i==0){
        if(i&1 ||(n/i)&1){
          cout<<a<<"\n";
          return;
        }
      }
    }
  }
  cout<<b<<"\n";
  
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