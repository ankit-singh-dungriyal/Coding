/*
Contest Id: 1463
Submission Id: 108530235
Date & Time: 26/02/2021 16:02:07
Tags/Concept used: ['bitmasks', 'constructive algorithms', 'greedy']
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
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(auto &x:v)cin>>x;
    vector<ll>ans;
    for(auto x:v){
        ll tmp=1;
        while(tmp<=x)tmp*=2;
        ans.pb(tmp/2);
    }
    for(auto x:ans)cout<<x<<" ";
    cout<<"\n";
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