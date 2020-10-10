// By 'Anki'
// Concept Used: Recursion, memoization

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
#define M 100010
#define N 30
#define F first
#define S second
using u64= uint64_t;

map<ll,ll>m;
ll solve(ll n)
{
    if(n<=3)return n;
    if(m[n])return m[n];
    m[n]=max(n,solve(n/2)+solve(n/3)+solve(n/4));
    return m[n];
}
int main()
{
fast
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ll t=1LL;
// cin>>t;
ll n;

while(cin>>n)
{
    cout<<solve(n)<<"\n";
}
 
} 
