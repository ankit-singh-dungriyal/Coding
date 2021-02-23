/*
Contest Id: 1475
Submission Id: 108019390
Date & Time: 20/02/2021 16:08:52
Tags/Concept used: ['combinatorics', 'graphs', 'math']
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
    ll a,b,k;
    cin>>a>>b>>k;
    vector<ll>v1(k),v2(k);
    for(auto &x:v1)cin>>x;
    for(auto &x:v2)cin>>x;
    map<ll,ll>x,y;
    for(auto i:v1)x[i]++;
    for(auto i:v2)y[i]++;
    ll ans=0;
    // map<ll,ll>p,q;
    for(int i=0;i<k;i++){
            ll tmp=k+1-(x[v1[i]]+y[v2[i]]);
            // wr(tmp);
            ans+=tmp;

    }
    // wr(ans)
    ans/=2;
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