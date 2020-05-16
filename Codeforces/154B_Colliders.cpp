#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define wr(i) cout<<#i<<" = "<<i<<",  ";
#define wre(i) cout<<#i<<"  =  "<<i<<endl;
#define all(v) v.begin(),v.end()
typedef long long ll;
// #define lim 1000000007
#define M 10000006
int main()
{
fast
ll t=1;
// cin>>t;

while(t--)
{
  ll a,b;
  cin>>a>>b;
  map<ll,pair<bool,ll>>m;
  while(b--){
      char ch;
      cin>>ch;
      ll n;
      cin>>n;
      
      if(ch=='+'){
          if(m[n].first){
              if(m[n].second==n)
              cout<<"Already on\n";
              else 
              cout<<"Conflict with "<<m[n].second<<"\n";
          }
          else{
              bool f=true;
              for(int i=2;i*i<=n;i++)if(n%i==0)
              if(m[i].first){
                  cout<<"Conflict with "<<m[i].second<<"\n";
                  f=false;
                  break;
              }
              else if(m[n/i].first){
                  cout<<"Conflict with "<<m[n/i].second<<"\n";
                  f=false;
                  break;
              }
              if(f){
                  cout<<"Success\n";
                  for(int i=2;i*i<=n;i++)if(n%i==0)
                  m[i].first=true,m[i].second=n,m[n/i].first=true,m[n/i].second=n;
                  m[n].first=true;m[n].second=n;
              }
          }
      }
      else
      {
          if(m[n].first&&m[n].second==n){
              cout<<"Success\n";
              m[n].first=false,m[n].second=0LL;
              for(int i=2;i*i<=n;i++)
              if(n%i==0)
              m[i].first=false,m[n/i].first=false,m[i].second=0LL,m[n/i].second=0LL;
          }
          else
          {
              cout<<"Already off\n";
          }
          
      }
      

  }
}
}
