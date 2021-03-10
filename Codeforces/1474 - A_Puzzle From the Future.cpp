/*
Contest Id: 1474
Submission Id: 109615520
Date & Time: 10/03/2021 19:21:02
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
  ans+='1';
  int ch=1+(s[0]-'0');
  vector<char>v;
  v.pb(ch+'0');
  for(int i=1;i<n;i++){
    ch=1+(s[i]-'0');
    if(ch+'0'==v.back()){
      ans+='0';
      ch--;
    }
    else ans+='1';
    v.pb(ch+'0');
  }
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
cin>>t;

while(t--)
{
solve();  

}
 
} 