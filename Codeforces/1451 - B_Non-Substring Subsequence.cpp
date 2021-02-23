/*
Contest Id: 1451
Submission Id: 106441473
Date & Time: 04/02/2021 15:31:34
Tags/Concept used: ['dp', 'greedy', 'implementation', 'strings']
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
    ll n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    vector<ll>v0(n+1,0),v1(n+1,0);
    for(int i=1;i<=n;i++){
        if(s[i-1]=='0')v0[i]=v0[i-1]+1;
        else v0[i]=v0[i-1];
        if(s[i-1]=='1')v1[i]=v1[i-1]+1;
        else v1[i]=v1[i-1];
    }
    while(q--){
        ll x,y;
        bool ans=0;
        cin>>x>>y;
        if(s[y-1]=='0'){
            if(v0[n]-v0[y]>0)ans=1;
        }
        else {
            if(v1[n]-v1[y]>0)ans=1;
        }
        if(s[x-1]=='0'){
            if(v0[x-1]>0)ans=1;
        }
        else {
            if(v1[x-1]>0)ans=1;
        }
        if(ans)cout<<"YES\n";
        else cout<<"NO\n";
    }
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