// By 'Anki'
// Concept used: dp

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
#define M 20000007
#define mod 1000000007
#define F first
#define S second
using u64= uint64_t;

int dp[M];
void precomputation(){
	dp[0]=0;
	dp[1]=0;
	dp[2]=1;
	dp[3]=1;
	for(int i=4;i<M-2;i++){
		int tmp=dp[i-1];
		if(i%2==0)tmp=min(tmp,dp[i/2]);
		if(i%3==0)tmp=min(tmp,dp[i/3]);
		dp[i]=1+tmp;
	}
}

int k=1;
void solve(){
ll n;
cin>>n;
cout<<"Case "<<k++<<": "<<dp[n]<<"\n";
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
precomputation();
cin>>t;
while(t--)
{
solve();
}


 
} 
