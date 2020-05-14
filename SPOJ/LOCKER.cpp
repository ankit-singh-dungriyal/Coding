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
#define M 100001
ll lim=1000000007;

// Use of Binary Exponentiation

int main()
{
fast
ll t=1;

cin>>t;
while(t--)
{
   ll n;
   cin>>n;

   ll ans1=1LL;
   if(n<=4)ans1=n;
   else
   {
      ll x;
      if(n%3==1)x=(n-4)/3,ans1=4;
      else if(n%3==2)x=(n-2)/3,ans1=2;
      else x=n/3;
      ll tmp=3;
      while(x>0){
         if(x&1)ans1=(ans1*tmp)%lim;
         tmp=(tmp*tmp)%lim;
         x>>=1;
      }
   }
   cout<<ans1<<"\n";
   
}
}
