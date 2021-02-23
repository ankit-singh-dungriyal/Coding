/*
Contest Id: 1475
Submission Id: 108099300
Date & Time: 21/02/2021 17:04:27
Tags/Concept used: ['dp', 'math', 'number theory', 'sortings']
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
    unordered_map<ll,ll>m;
    for(auto &x:v)cin>>x,m[x]++;
    ll z=200005;
    vector<ll>dp(z,0);

    for(int i=1;i<z;i++){
        dp[i]+=m[i];
        for(int j=2*i;j<z;j+=i)dp[j]=max(dp[j],dp[i]);
    }
    cout<<n-*max_element(all(dp))<<"\n";


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