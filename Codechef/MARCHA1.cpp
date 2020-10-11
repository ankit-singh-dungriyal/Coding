// By 'Anki'
// Concept used: 0-1 Knapsack

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
ll n,m;
cin>>n>>m;
vector<ll>v(n);
for(auto &x:v)cin>>x;
vector<vector<bool>>ans(n+1,vector<bool>(m+1,false));
for(int i=0;i<=n;i++)ans[i][0]=1;
for(int i=1;i<=n;i++){
	for(int j=1;j<=m;j++){
		if(v[i-1]>j)ans[i][j]=ans[i-1][j];
		else ans[i][j]=ans[i-1][j]|ans[i-1][j-v[i-1]];
	}
}
if(ans[n][m])cout<<"Yes\n";
else cout<<"No\n";
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
