/*
Contest Id: 1478
Submission Id: 109139409
Date & Time: 05/03/2021 14:56:04
Tags/Concept used: ['brute force', 'dp', 'greedy', 'math']
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


vector<ll>pre[10];
bool check[10][100];

void precomp(){
  for(int i=1;i<=9;i++){
    for(int j=i;j<i*10;j++){
      ll tmp=j;
      while(tmp){
        if(tmp%10==i)pre[i].pb(j);
        tmp/=10;
      }
    }
  }

  for(int i=1;i<=9;i++){
    check[i][0]=true;
    for(int j=0;j<pre[i].size();j++){
        ll val=pre[i][j];
        if(check[i][val])continue;
        for(int k=0;k+val<=i*10;k++){
          if(check[i][k])check[i][k+val]=true;
        }
    }
  }

}

void solve(){
  ll n,k;
  cin>>n>>k;
  vector<ll>v(n);
  for(auto &x:v)cin>>x;
  for(auto x:v){
    if(x>=k*10 || check[k][x]){
      cout<<"YES\n";
    }
    else cout<<"NO\n";
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

precomp();
ll t=1LL;
cin>>t;

while(t--)
{
solve();  

}
 
} 