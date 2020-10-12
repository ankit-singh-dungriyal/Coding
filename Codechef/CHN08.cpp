// By 'Anki'
// Concept used: Fibonacci series, companion matrix, modular arithmetic

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
#define mod 1000000007
#define F first
#define S second
using u64= uint64_t;

void mul(ll a[2][2],ll b[2][2]){
	ll res[2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			res[i][j]=0LL;
			for(int k=0;k<2;k++)res[i][j]=(res[i][j]+a[i][k]*b[k][j])%mod;
		}
	}
	for(int i=0;i<2;i++)for(int j=0;j<2;j++)a[i][j]=res[i][j];
}

ll power(ll f1,ll f2,ll n){
	ll res[2][2]={{1,0},{0,1}};
	ll a[2][2]={{1,-1},{1,0}};
	while(n){
		if(n&1)mul(res,a);
		mul(a,a);
		n/=2;
	}
	ll ans=((res[0][0]*f2)%mod+(res[0][1]*f1)%mod)%mod;
	return (mod+ans)%mod;

}


void solve(){
ll a,b,n;
cin>>a>>b>>n;
if(n==1)cout<<a<<"\n";
else if(n==2)cout<<b<<"\n";
else cout<<power(a,b,n-2)<<"\n";
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
