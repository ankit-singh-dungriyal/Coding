/*
Contest Id: 1472
Submission Id: 108465651
Date & Time: 25/02/2021 15:46:16
Tags/Concept used: ['greedy', 'math']
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
    ll n,m,k;
    cin>>n>>m>>k;
    ll cn=0;
    while(n%2==0)cn++,n/=2;
    while(m%2==0)cn++,m/=2;
    if(pow(2,cn)>=k)cout<<"Yes\n";
    else cout<<"No\n";

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