/*
Contest Id: 1473
Submission Id: 108655149
Date & Time: 28/02/2021 15:08:24
Tags/Concept used: ['greedy', 'implementation', 'math', 'sortings']
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
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(auto &x:v)cin>>x;
    sort(all(v));
    if(v[n-1]<=k){
        cout<<"YES\n";
        return;
    }
    if(v[0]+v[1]<=k){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
    
  
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