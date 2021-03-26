/*
Contest Id: 1506
Submission Id: 111121697
Date & Time: 26/03/2021 15:47:20
Tags/Concept used: ['constructive algorithms', 'data structures', 'greedy']
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
   ll n,sum=0,mx=0,x;
   cin>>n;
   map<ll,ll>m;
   for(int i=0;i<n;i++)cin>>x,m[x]++,mx=max(mx,m[x]);
   ll ans=max(0LL,mx-(n-mx));
   if((n&1) && (ans==0))ans=1;
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