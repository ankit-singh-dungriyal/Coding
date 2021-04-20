/*
Contest Id: 1514
Submission Id: 113544248
Date & Time: 19/04/2021 22:56:28
Tags/Concept used: ['constructive algorithms', 'math', 'number theory']
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

void solve(){
    ll n;
    cin>>n;
    vector<ll>v;
    ll pro=1;
    for(ll i=1;i<n;i++)if(__gcd(i,n)==1)v.pb(i),pro=(pro*i)%n;
    if(pro==1){
        cout<<v.size()<<"\n";
        for(auto &x:v)cout<<x<<" ";
    }
    else{
        cout<<v.size()-1<<"\n";
        for(auto &x:v){
            if(x==pro)continue;
            cout<<x<<" ";
        }
    }
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
// cin>>t;
while(t--)
{
solve();  

}
 
} 