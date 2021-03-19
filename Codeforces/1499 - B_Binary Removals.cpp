/*
Contest Id: 1499
Submission Id: 110439450
Date & Time: 19/03/2021 15:51:40
Tags/Concept used: ['brute force', 'dp', 'greedy', 'implementation', 'strings']
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
  string s;
  cin>>s;
  ll n=s.length();
  int pos=-1;
  for(int i=0;i<n-1;i++){
    if(s[i]=='1'&& s[i+1]=='1'){
      pos=i;
      break;
    }
  }
  string a="";
  if(pos!=-1){
    a=s.substr(pos);
    // wr(pos)
  }
  // wr(a)
  size_t found1=a.find("00");
  // size_t found2=a.find("11");
  if(found1!=string::npos){
    cout<<"NO\n";
  }
  else cout<<"YES\n";
  
  
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