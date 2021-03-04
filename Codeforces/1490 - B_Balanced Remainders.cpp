/*
Contest Id: 1490
Submission Id: 109076105
Date & Time: 04/03/2021 17:30:02
Tags/Concept used: ['brute force', 'constructive algorithms', 'math']
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
#define lim 1000000000000LL
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
    vector<int>cnt(3,0);
    for(auto &x:v){
      cin>>x;
      cnt[x%3]++;
    }
    ll k=n/3;
    for(int j=0;j<6;j++)
    for(int i=0;i<3;i++){
      if(cnt[i]>k){
        ll tmp=cnt[i]-k;
        cnt[(i+1)%3]+=tmp;
        cnt[i]-=tmp;
        ans+=tmp;
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