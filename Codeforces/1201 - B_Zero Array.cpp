/*
Contest Id: 1201
Submission Id: 111257135
Date & Time: 28/03/2021 11:49:42
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
    vector<ll>v(n);
    ll sum=0,mx=0;
    for(auto &x:v)cin>>x,sum+=x,mx=max(mx,x);
    cout<<((sum%2==0 && mx<=sum/2)?"YES\n":"NO\n");

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
// cin>>t;


while(t--)
{
solve();  

}
 
} 