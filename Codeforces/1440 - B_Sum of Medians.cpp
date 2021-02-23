/*
Contest Id: 1440
Submission Id: 106174710
Date & Time: 01/02/2021 15:07:11
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
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n*k);
    for(auto &x:v)cin>>x;
    ll gp=n/2;
    if(n&1)gp++;
    gp=n-gp;
    sort(all(v));
    ll ans=0;
    // wr(gp)
    gp++;
    for(int i=n*k-gp,j=0;i>=0,j<k;i-=gp,j++)ans+=v[i];
    cout<<ans<<"\n";

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