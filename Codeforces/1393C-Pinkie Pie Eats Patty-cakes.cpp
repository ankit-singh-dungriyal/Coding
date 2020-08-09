//  By 'Anki'
// Concept used: map, constructive algorithm, maths

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
#define lim 10000000000012LL
typedef unsigned long long ull;
#define M 200005
using u64= uint64_t;


int main()
{
fast
ll t=1LL;
cin>>t;
while(t--)
{
ll n;
cin>>n;
vector<ll>v(n);
map<ll,ll>m;
for(auto &x:v)cin>>x,m[x]++;
ll mx_f=0LL,mx=0LL;
for(auto x:m)mx_f=max(mx_f,x.second);
for(auto x:m)if(x.second==mx_f)mx++;
ll ans=(n-mx_f-mx+1)/(mx_f-1);
cout<<ans<<"\n";

}
} 


