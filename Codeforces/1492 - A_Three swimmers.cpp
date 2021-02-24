/*
Contest Id: 1492
Submission Id: 108381064
Date & Time: 24/02/2021 14:56:45
Tags/Concept used: ['math']
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
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
    ll x,y,z;
    x=(a-n%a)%a;
    y=(b-n%b)%b;
    z=(c-n%c)%c;
    cout<<min(x,min(y,z))<<"\n";

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
cin>>t;
while(t--)
{
solve();  

}
 
} 