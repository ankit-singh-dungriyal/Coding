// By 'Anki'
// Concept used: basic dp

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
#define lim 1000000000000000000LL
typedef unsigned long long ull;
#define M 1003
#define F first
#define S second
using u64= uint64_t;

int main()
{
fast
ll t=1LL;
cin>>t;
 
while(t--)
{
ll n,m;
cin>>n>>m;
vector<vector<char>>v(n+2,vector<char>(m+2,'.'));
vector<vector<ll>>l(n+2,vector<ll>(m+2,0LL)),r(n+2,vector<ll>(m+2,0LL)),u(n+2,vector<ll>(m+2,0LL)),d(n+2,vector<ll>(m+2,0LL));

for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)cin>>v[i][j];

for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        if(v[i][j]=='#'){
            if(v[i-1][j]=='.')l[i][j]=l[i][j-1]+1;
            else l[i][j]=0;
            if(v[i+1][j]=='.')r[i][j]=r[i][j-1]+1;
            else r[i][j]=0;
            if(v[i][j-1]=='.')u[i][j]=u[i-1][j]+1;
            else u[i][j]=0;
            if(v[i][j+1]=='.')d[i][j]=d[i-1][j]+1;
            else d[i][j]=0;
        }
        else l[i][j]=r[i][j]=u[i][j]=d[i][j]=0LL;
    }
}
ll ans=0LL;
for(int i=0;i<n+1;i++){
    for(int j=0;j<m+1;j++)ans=max(ans,max(l[i][j],max(r[i][j],max(u[i][j],d[i][j]))));
}
cout<<ans<<"\n";

}
 
} 
