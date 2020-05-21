// Concepts used: Ternary search

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
#define M 1000006
 
ll gcd(ll a,ll b){
    return b?gcd(b,a%b):a;
}
 
ll fact(ll n)
{
    ll ans=1LL;
    while(n)
    ans*=(n--);
    return ans;
}
 
ll func(ll val,vector<ll>a,vector<ll>b){
    ll ans=0LL;
    for(int i=0;i<a.size();i++)ans+=abs(a[i]-val)*b[i];
    // wr(ans);
    return ans;
}
 
ll terniary(vector<ll>a,vector<ll>b){
    ll l=0LL,r=10001LL;
   while(r-l>2){
       ll m1=l+(r-l)/3;
       ll m2=r-(r-l)/3;
       if(func(m1,a,b)<func(m2,a,b))r=m2;
       else l=m1;
   }
    ll ans=func(l,a,b);
   for(int i=l;i<=r;i++)ans=min(ans,func(i,a,b));
   return ans;
}
 
int main()
{
fast
ll t=1;
cin>>t;
while(t--)
{
   ll n;
   cin>>n;
   vector<ll>a(n),b(n);
   for(auto &x:a)cin>>x;
   for(auto &x:b)cin>>x;
   cout<<terniary(a,b)<<"\n";
   
}
} 
