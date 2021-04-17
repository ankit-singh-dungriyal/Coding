/*
Contest Id: 1509
Submission Id: 113189308
Date & Time: 16/04/2021 20:09:59
Tags/Concept used: ['constructive algorithms']
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
    vector<ll>a,b;
    ll x;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x&1)a.pb(x);
        else b.pb(x);
    }
    for(auto &x:a)cout<<x<<" ";
    for(auto &x:b)cout<<x<<" ";
    cout<<"\n";

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