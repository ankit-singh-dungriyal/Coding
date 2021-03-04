/*
Contest Id: 1490
Submission Id: 109076037
Date & Time: 04/03/2021 17:29:05
Tags/Concept used: ['binary search', 'brute force', 'brute force', 'math']
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

vector<ll>cube;
void pre(){
  ll tmp=1;
  ll c=1;
  while(c<=lim){
    cube.pb(c);
    tmp++;
    c=tmp*tmp*tmp;
  }
}
void solve(){
  ll n;
  cin>>n;
  ll sz=cube.size();
  for(ll x:cube){
      ll tmp=n-x;
      ll i=0,j=sz-1;
      while(i<=j){
        ll m=i+(j-i)/2;
        if(cube[m]==tmp){
          cout<<"YES\n";
          return;
        }
        else if(cube[m]<tmp)i=m+1;
        else j=m-1;
      }
  }
  cout<<"NO\n";
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