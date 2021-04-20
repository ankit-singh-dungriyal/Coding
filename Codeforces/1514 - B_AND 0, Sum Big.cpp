/*
Contest Id: 1514
Submission Id: 113541067
Date & Time: 19/04/2021 22:26:22
Tags/Concept used: ['bitmasks', 'combinatorics', 'math']
*/

#include<bits/stdc++.h>
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
#define MAX 400005
#define N 10000007
#define F first
#define S second
using u64= uint64_t;

void solve(){
    ll n,k;
    cin>>n>>k;
    if(n==1){
        cout<<1<<"\n";return;
    }
    ll ans=1;
    for(int i=0;i<k;i++)ans=(ans*n)%mod;
    cout<<ans<<"\n";

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