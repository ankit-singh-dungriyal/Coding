/*
Contest Id: 1270
Submission Id: 112214150
Date & Time: 07/04/2021 15:52:59
Tags/Concept used: ['bitmasks', 'constructive algorithms', 'math']
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
#define lim 100000000000LL
typedef unsigned long long ull;
#define mod 1000000007
#define MAX 400005
#define N 10000007
#define F first
#define S second
using u64= uint64_t;


void solve(){
    ll n;
    cin>>n;
    ll sum=0LL,xo=0LL;
    ll x;
    for(int i=0;i<n;i++)cin>>x,sum+=x,xo^=x;
    cout<<2<<"\n";
    cout<<xo<<" "<<sum+xo<<"\n";
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