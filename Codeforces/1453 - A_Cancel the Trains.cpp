/*
Contest Id: 1453
Submission Id: 106894603
Date & Time: 08/02/2021 15:01:39
Tags/Concept used: ['implementation']
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
    ll n,m;
    cin>>n>>m;
    map<ll,ll>k;
    ll ans=0,x;
    for(int i=0;i<n;i++)cin>>x,k[x]=1;
    for(int i=0;i<m;i++){
        cin>>x;
        if(k[x])ans++;
    }
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