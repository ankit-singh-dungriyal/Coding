// Concept used: Floyd-worshall algo
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
#define lim 10000007LL
typedef unsigned long long ull;
#define M 10004
using u64= uint64_t;
 

int main()
{
fast
ll t=1LL;
// cin>>t;

while(t--)
{
ll n;
cin>>n;
ll a[n][n];
for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>a[i][j];
ll q;
cin>>q;
ll x,y,z;
for(int i=0;i<q;i++){
cin>>x>>y>>z;
x--,y--;
a[x][y]=min(a[x][y],z);
a[y][x]=min(a[y][x],z);
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
    a[i][j]=min(a[i][j],min(a[i][x]+a[x][y]+a[y][j],a[i][y]+a[y][x]+a[x][j]));
  }
ll ans=0LL;
for(int i=0;i<n;i++){
  for(int j=0;j<n;j++)ans+=a[i][j];
}
cout<<ans/2<<" ";
}
}
} 
