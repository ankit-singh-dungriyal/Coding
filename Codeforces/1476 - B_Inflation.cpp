/*
Contest Id: 1476
Submission Id: 108864341
Date & Time: 02/03/2021 15:09:00
Tags/Concept used: ['binary search', 'brute force', 'greedy', 'math']
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
    vector<ll>sum(n);
    sum[0]=v[0];
    for(int i=1;i<n;i++)sum[i]=sum[i-1]+v[i];
    // for(auto x:sum)cout<<x<<" ";
    // cout<<"\n";
    ll ans=0;
    for(int i=n-1;i>0;i--){
      ll tmp=v[i]*100;
      ll p=tmp/k;
      if(tmp%k!=0)p++;
      // wr(p)
      ans=max(ans,p-sum[i-1]);
      // wr(ans)
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