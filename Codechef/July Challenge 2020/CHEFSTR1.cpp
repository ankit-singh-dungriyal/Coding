
// 'By Anki'
 
#include<bits/stdc++.h>
// #include<iostream>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define wr(i) cout<<#i<<" = "<<i<<",  ";
#define wre(i) cout<<#i<<"  =  "<<i<<endl;
#define all(v) v.begin(),v.end()
typedef long long ll;
#define lim 1000000007LL
typedef unsigned long long ull;
#define M 10004
using u64= uint64_t;


int main()
{
fast
ll t=1LL;
cin>>t;
while(t--)
{
   ll n;
   cin>>n;
   ll ans=0LL;
    vector<ll>v(n);
    for(auto &x:v)cin>>x;
    for(int i=0;i<n-1;i++)
    ans+=abs(v[i]-v[i+1])-1;
    cout<<ans<<"\n";

}
} 
