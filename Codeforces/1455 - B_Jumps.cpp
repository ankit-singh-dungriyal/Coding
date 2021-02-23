/*
Contest Id: 1455
Submission Id: 106664947
Date & Time: 06/02/2021 15:33:35
Tags/Concept used: ['constructive algorithms', 'math']
*/


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
#define mod 1000000007
#define M 31
#define N 30
#define F first
#define S second
using u64= uint64_t;

void solve(){
    
    
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
vector<ll>v(1000006);
ll i=1LL;
v[1]=1;
ll cn=2;
while(i<1000003){
    ll k=v[i]+1;
    ll j=i+1;
    for(;j<=i+cn;j++)v[j]=k;
    i=j-1;
    v[i-1]=k+1;
    cn++;
}
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    cout<<v[n]<<"\n";
// solve();   
}
 
} 