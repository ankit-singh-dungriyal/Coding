// C. Mail Stamps (Codeforces Beta Round #29 (Div. 2, Codeforces format))
// Concept used : dfs
// 'By Anki'
 
#include<bits/stdc++.h>
// #include<iostream>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define wr(i) cout<<#i<<" = "<<i<<",  ";
#define wre(i) cout<<#i<<"  =  "<<i<<endl;
#define all(v) v.begin(),v.end()
typedef long long ll;
#define lim 1000000007LL
typedef unsigned long long ull;
#define M 200005
using u64= uint64_t;
 
vector<ll>ans;
map<ll,vector<ll>>inp;
void dfs(ll n,ll p)
{
  ans.pb(n);
  // wr(n)
    for(auto x:inp[n]){
      if(x!=p)dfs(x,n);
    }

}
 
 
int main()
{
fast
ll t=1LL;
// cin>>t;
while(t--)
{
  ll n;
  cin>>n;
  map<ll,ll>m;
  ll x,y;
  // map<ll,vector<ll>>inp;
  for(int i=0;i<n;i++){
    cin>>x>>y;
    m[x]++,m[y]++;
    inp[x].pb(y);inp[y].pb(x);
  }
  ll tmp;
  for(auto x:m)if(x.second==1){tmp=x.first;break;}
  dfs(tmp,-1);
  for(auto x:ans)cout<<x<<" ";
}
} 
