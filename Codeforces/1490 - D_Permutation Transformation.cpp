/*
Contest Id: 1490
Submission Id: 109075987
Date & Time: 04/03/2021 17:28:19
Tags/Concept used: ['dfs and similar', 'divide and conquer', 'implementation']
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

void func(vector<ll>&v,vector<ll>&ans,ll l ,ll r,ll k){
    if(l>r)return;
    ll mx=*max_element(v.begin()+l,v.begin()+r+1);
    for(int i=l;i<=r;i++){
      if(mx==v[i]){
      ans[i]=k;
      func(v,ans,l,i-1,k+1);
      func(v,ans,i+1,r,k+1);
      break;
      }
    }
}

void solve(){
  ll n;
  cin>>n;
  vector<ll>v(n);
  for(auto &x:v)cin>>x;
  vector<ll>ans(n);
  func(v,ans,0,n-1,0);
  for(auto x:ans)cout<<x<<" ";
  cout<<"\n";
}



int main()
{
fast
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

// pre();
ll t=1LL;
cin>>t;

while(t--)
{
solve();  

}
 
} 