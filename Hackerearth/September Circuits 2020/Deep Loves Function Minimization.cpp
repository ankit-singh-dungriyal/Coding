// By 'Anki'
// Concept used: maths, sorting
 
#include<bits/stdc++.h>
#include<thread>
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
#define M 1003
#define N 30
#define F first
#define S second
using u64= uint64_t;


bool compar(pair<ll,ll>a,pair<ll,ll>b){
	return (a.F*b.S<a.S*b.F);
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
ll n;
cin>>n;
vector<pair<ll,ll>>v;
ll a[3][n];
for(int i=0;i<3;i++)for(int j=0;j<n;j++)cin>>a[i][j];
for(int i=0;i<n;i++)v.pb(mp(a[0][i],(a[1][i]*a[2][i])));
sort(all(v),compar);
// for(auto x:v)cout<<x.F<<" "<<x.S<<"\n";
ll ans=0LL;
vector<ll>tmp(n+1,0);
for(int i=n-1;i>0;i--)tmp[i]=tmp[i+1]+v[i].S;
// for(auto x:tmp)cout<<x<<" ";
// cout<<"\n";
for(int i=0;i<n;i++)ans=(ans+(v[i].F*tmp[i+1])%lim)%lim;
cout<<ans<<"\n";
}
 
} 
