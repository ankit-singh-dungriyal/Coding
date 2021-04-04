/*
Contest Id: 1498
Submission Id: 111998240
Date & Time: 04/04/2021 17:27:56
Tags/Concept used: ['brute force', 'data structures', 'dp']
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


// vector<vector<vector<ll>>>v;
ll v[1001][1001][2];
ll n,k;
ll func(ll x,ll k,ll f){
    if(k==1)return 1;
    if(v[x][k][f]!=-1)return v[x][k][f];
    ll ans=0;
    if(f){
        if(x<n)ans+=func(x+1,k,f);
        else ans++;
        ans%=mod;
        if(x>1)ans+=func(x-1,k-1,!f);
        else ans++;
        v[x][k][f]=ans%mod;
    }
    else{
        if(x<n)ans+=func(x+1,k-1,!f);
        else ans++;
        ans%=mod;
        if(x>1)ans+=func(x-1,k,f);
        else ans++;
        v[x][k][f]=ans%mod;
    }
    return v[x][k][f]%mod;
}

void solve(){
   cin>>n>>k;
    memset(v,-1,sizeof(v));
   cout<<func(1,k,1LL)<<"\n";


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