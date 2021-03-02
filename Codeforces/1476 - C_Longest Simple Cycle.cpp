/*
Contest Id: 1476
Submission Id: 108870711
Date & Time: 02/03/2021 16:50:34
Tags/Concept used: ['dp', 'graphs', 'greedy']
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
    vector<ll>v(n),a(n),b(n);
    for(auto &x:v)cin>>x;
    for(auto &x:a)cin>>x;
    for(auto &x:b)cin>>x;
    ll ans=0,tmp=0;
    for(int i=1;i<n;i++){
      if(a[i]==b[i])tmp=2;
      else if(tmp==0)tmp=abs(a[i]-b[i])+2;
      else tmp=max(tmp+v[i-1]+1-abs(a[i]-b[i]),abs(a[i]-b[i])+2);
      ans=max(ans,tmp+v[i]-1);
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