// Concept used: matrix pattern, maths
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
#define M 100006LL
using u64= uint64_t;
 


int main()
{
fast
ll t=1LL;
ll n=1003;
ll a[n][n];
a[1][1]=1;
ll cn=1;
for(int i=2;i<n;i++){
  for(int j=1;j<=i;j++)a[j][i]=(++cn);
  for(int j=i-1;j>=1;j--)a[i][j]=(++cn);
}
// for(int i=1;i<=5;i++){
//   for(int j=1;j<=5;j++)cout<<a[i][j]<<" ";
//   cout<<endl;
// }
for(cin>>t;t;t--){
ll n;
cin>>n;
for(int i=1;i<=n;i++){
  for(int j=1;j<=n;j++)cout<<a[i][j]<<" ";
  cout<<"\n";
}
}

} 
