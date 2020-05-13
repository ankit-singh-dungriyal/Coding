#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define wr(i) cout<<#i<<" = "<<i<<",  ";
#define wre(i) cout<<#i<<"  =  "<<i<<endl;
#define all(v) v.begin(),v.end()
typedef long long ll;
#define lim 1000000007
#define M 100001

// Binary exponentiation is used in this problem

int main()
{
fast
ll t=1;
cin>>t;
while(t--)
{
   ll a,b;
   cin>>a>>b;
   a=a%10;
   ll ans=1;
   while(b>0){
      if(b&1)ans=(ans*a)%10;
      a=a*a%10;
      b=b>>1;
   }
   cout<<ans<<"\n";
}
} 
