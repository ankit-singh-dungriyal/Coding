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
   ll n,m;
   cin>>n;
   ll ans=0,mx=0,my=0,s1=0,s2=0;
   vector<ll>a(n);
   for(auto &x:a)cin>>x,s1+=x,mx=max(mx,s1);
   cin>>m;
   vector<ll>b(m);
   for(auto &x:b)cin>>x,s2+=x,my=max(my,s2);
   ans=mx+my;
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
