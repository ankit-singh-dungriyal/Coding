// By 'Anki'
// Concept used: gcd, precomputation

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
#define M 1000005
#define N 30
#define F first
#define S second
using u64= uint64_t;


void solve(){
ll n,q;
cin>>n>>q;
ll pre[n+1],suf[n+2];
vector<ll>v(n+1);
for(int i=1;i<=n;i++)cin>>v[i];
pre[0]=0;
pre[1]=v[1];
for(int i=2;i<=n;i++)pre[i]=__gcd(pre[i-1],v[i]);
suf[n+1]=0LL;
suf[n]=v[n];
for(int i=n-1;i>=1;i--)suf[i]=__gcd(suf[i+1],v[i]);
while(q--){
	ll l,r;
	cin>>l>>r;
	// l--;r--;
	// wr(pre[l-1])wr(suf[r+1])
	cout<<__gcd(pre[l-1],suf[r+1])<<"\n";
}


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
