/*
Contest Id: 1496
Submission Id: 109957109
Date & Time: 14/03/2021 14:53:59
Tags/Concept used: ['brute force', 'constructive algorithms', 'greedy', 'strings']
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


bool ispalin(string s){
  int i=0,j=s.length()-1;
  while(i<j)if(s[i++]!=s[j--])return false;
  return true;
}

void solve(){
  ll n,k;
  cin>>n>>k;
  string s;
  cin>>s;
  if(!k)cout<<"YES\n";
  else{
    if(n%2==0 && k==n/2)cout<<"NO\n";
    else{
      int i=0,j=s.length()-1;
      int cn=0;
      while(i<j){
        cn++;
        if(s[i++]!=s[j--]){
          cout<<"NO\n";
          return;
        }
        if(cn==k)break;
      }
      cout<<"YES\n";
    }
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

ll t=1LL;
cin>>t;

while(t--)
{
solve();  

}
 
} 