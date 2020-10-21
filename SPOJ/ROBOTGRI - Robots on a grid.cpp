// By 'Anki'
// Concept used: dp,dfs

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
// #define mod 1000000007
#define M 100005
#define N 30
#define F first
#define S second
using u64= uint64_t;

void dfs(ll n, vector<vector<char>>&a,ll x,ll y){
  if(x>=1 && x<=n && y>=1 && y<=n && a[x][y]=='.'){
    a[x][y]='$';
    dfs(n,a,x,y+1);
    dfs(n,a,x,y-1);
    dfs(n,a,x+1,y);
    dfs(n,a,x-1,y);
  }

}

void solve(){
int n;
cin>>n;
ll mod=pow(2,31)-1;
// wr(mod)
vector<vector<ll>>v(n+1,vector<ll>(n+1,0));
vector<vector<char>>a(n+1,vector<char>(n+1));
for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)cin>>a[i][j];
v[1][1]=1;
for(int i=1;i<=n;i++){
  for(int j=1;j<=n;j++){
    if(i==1 && j==1)continue;
    if(a[i][j]=='.'){
      v[i][j]=(v[i-1][j]+v[i][j-1])%mod;
    }
  }
}

// for(int i=0;i<=n;i++){
//   for(int j=0;j<=n;j++)cout<<v[i][j]<<" ";
//   cout<<"\n";
// }
if(v[n][n])cout<<v[n][n]<<"\n";
else{
  dfs(n,a,1,1);
  if(a[n][n]=='$')cout<<"THE GAME IS A LIE\n";
  else cout<<"INCONCEIVABLE\n";
}

}

int main()
{
// fast
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll t=1LL;
// cin>>t;
while(t--)
{
solve();   
}
 
} 
