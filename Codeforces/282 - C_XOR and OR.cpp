/*
Contest Id: 282
Submission Id: 112140792
Date & Time: 06/04/2021 16:10:50
Tags/Concept used: ['constructive algorithms', 'implementation', 'math']
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
#define lim 100000000000LL
typedef unsigned long long ull;
#define mod 1000000007
#define MAX 400005
#define N 10000007
#define F first
#define S second
using u64= uint64_t;


void solve(){
  string a,b;
  cin>>a>>b;
  if(a.length()!=b.length())cout<<"NO\n";
  else if(a==b)cout<<"YES\n";
  else{
      int k=0,k2=0;
      for(char &ch:b){
          if(ch=='1')k++;
      }
      if(k==0){
          cout<<"NO\n";
          return;
      }
      for(char &ch:a)if(ch=='1')k2++;
      if(!k2)cout<<"NO\n";
      else cout<<"YES\n";
      

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
// cin>>t;
while(t--)
{
solve();  

}
 
} 