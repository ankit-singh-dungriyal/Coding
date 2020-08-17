//  By 'Anki'
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
ll n,m;
cin>>n>>m;
ll a=n/9;
ll b=m/9;
if(n%9!=0)a++;
if(m%9!=0)b++;
if(a<b){cout<<0<<" "<<a;}
else cout<<"1 "<<b;
cout<<"\n";
}
} 


