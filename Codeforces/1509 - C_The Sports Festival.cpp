/*
Contest Id: 1509
Submission Id: 113323570
Date & Time: 17/04/2021 16:38:05
Tags/Concept used: ['dp', 'greedy']
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


ll func(int i,int j,vector<ll>&v,vector<vector<ll>>&dp){
    if(dp[i][j]!=-1)return dp[i][j];
    if(i==j)dp[i][j]=0;
    else{
        ll a=func(i+1,j,v,dp);
        ll b=func(i,j-1,v,dp);
        dp[i][j]=v[j]-v[i]+min(a,b);
    }
    return dp[i][j];
}

void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(auto &x:v)cin>>x;
    sort(all(v));
    vector<vector<ll>>dp(n,vector<ll>(n,-1));
    ll ans=func(0,n-1,v,dp);
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
// cin>>t;
while(t--)
{
solve();  

}
 
} 