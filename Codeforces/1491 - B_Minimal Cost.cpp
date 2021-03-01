/*
Contest Id: 1491
Submission Id: 108786901
Date & Time: 01/03/2021 14:50:10
Tags/Concept used: ['brute force', 'greedy', 'implementation', 'math']
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
    ll n,u,v;
    cin>>n>>u>>v;
    bool f=false;
    vector<ll>a(n);
    for(auto &x:a)cin>>x;
    ll dif=0;
    for(int i=1;i<n;i++){
      dif=max(dif,abs(a[i]-a[i-1]));
    }
    ll ans=0;
    if(dif==0){
      ans=min(2*v,v+u);
    }
    else if(dif==1){
      ans=min(u,v);
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