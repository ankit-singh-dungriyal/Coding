// C. Johnny and Another Rating Drop ( Codeforces Round #647 (Div. 2) )
// Concept used: bitmask, precomputation
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
map<ull,ull>m;
m[1]=1;
ull i=2;
while(i<=1e+18)
{
  m[i]=i+m[i>>1];
  i<<=1;
}
// for(int i=0;i<17;i++)cout<<m[i]<<" ";

for(cin>>t;t;t--){
ull n;
cin>>n;
ull ans=0LL;
ull i=1;
while(n)
{
  if(n&1)ans+=m[i];
  n/=2;
  i<<=1;
}
cout<<ans<<"\n";
}

} 
