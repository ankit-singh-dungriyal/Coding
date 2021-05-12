/*
Contest Id: 1203
Submission Id: 116034401
Date & Time: 12/05/2021 19:52:05
Tags/Concept used: ['implementation', 'math']
*/

#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define wr(i) cout<<#i<<" = "<<i<<",  ";
#define wre(i) cout<<#i<<"  =  "<<i<<endl;
#define all(v) v.begin(),v.end()
typedef long long ll;
#define lim 1000000000000000000LL
typedef unsigned long long ull;
#define mod 1000000007
#define MAX 400005
#define N 10000007
#define F first
#define S second
using u64= uint64_t;



void solve(){
   ll n;
   cin>>n;
   vector<ll>v(n);
   for(auto &x:v)cin>>x;
   ll g=v[0];
   for(int i=1;i<n;i++)g=__gcd(g,v[i]);
   ll ans=1;
   for(ll i=2;i*i<=g;i++){
       if(g%i==0){
           if(i==g/i)ans++;
           else ans+=2;
       }
   }
   if(g!=1)ans++;
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