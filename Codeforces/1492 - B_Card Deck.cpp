/*
Contest Id: 1492
Submission Id: 108382068
Date & Time: 24/02/2021 15:09:28
Tags/Concept used: ['data structures', 'greedy', 'math']
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
    int p=n-1;
    vector<bool>f(n+1,false);
    int i=n-1,j=n;
    vector<ll>ans;
    int cn=0;
    while(i>=0){
        while(v[i]!=j)i--;
        for(int k=i;k<=p;k++)ans.pb(v[k]),f[v[k]]=true;
        i--;
        p=i;
        while(f[j])j--;
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