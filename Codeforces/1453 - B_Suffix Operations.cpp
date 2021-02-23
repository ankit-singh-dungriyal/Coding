/*
Contest Id: 1453
Submission Id: 106956878
Date & Time: 09/02/2021 12:13:41
Tags/Concept used: ['constructive algorithms', 'implementation']
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
#define lim 1000000000000000000LL
typedef unsigned long long ull;
#define mod 1000000007
#define M 31
#define N 30
#define F first
#define S second
using u64= uint64_t;


void solve(){
   ll n;
   cin>>n;
   vector<ll>v(n);
   for(auto &x:v)cin>>x;
   ll ans=0;
   for(int i=1;i<n;i++)ans+=abs(v[i]-v[i-1]);
   ll dif=0LL;
   dif=max(dif,abs(v[1]-v[0]));
   dif=max(dif,abs(v[n-1]-v[n-2]));
   for(int i=1;i<n-1;i++)dif=max(dif,abs(v[i]-v[i-1])+abs(v[i]-v[i+1])-abs(v[i+1]-v[i-1]));
//    wr(ans)wr(dif)
   cout<<max(0LL,ans-dif)<<"\n";
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