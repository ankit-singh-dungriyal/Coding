/*
Contest Id: 1165
Submission Id: 109461057
Date & Time: 09/03/2021 16:37:28
Tags/Concept used: ['greedy']
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




void solve(){
  ll n;
  cin>>n;
  string s;
  cin>>s;
  string ans="";
  for(int i=0;i<n-1;i++){
    if(s[i]!=s[i+1]){
      ans+=s[i];
      ans+=s[i+1];
      i++;
      continue;
    }
  }

  if(ans.length()&1)ans.pop_back();
  cout<<n-ans.length()<<"\n";
  cout<<ans<<"\n";

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
// cin>>t;

while(t--)
{
solve();  

}
 
} 