/*
Contest Id: 1490
Submission Id: 109068487
Date & Time: 04/03/2021 15:39:12
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
    ll ans=0;
    for(auto &x:v)cin>>x;
    for(int i=1;i<n;i++){
      ll a=min(v[i],v[i-1]);
      ll b=max(v[i],v[i-1]);
      ll tmp=b/a;
      if(b%a!=0)tmp++;
      while(tmp>2){
        a<<=1;
        // wr(a)
        tmp=b/a;
        if(b%a!=0)tmp++;
        ans++;
      }
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