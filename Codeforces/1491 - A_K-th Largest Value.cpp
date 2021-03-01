/*
Contest Id: 1491
Submission Id: 108786149
Date & Time: 01/03/2021 14:38:57
Tags/Concept used: ['brute force', 'greedy', 'implementation']
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
    ll a=0,b=0;
    ll x;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
      if(v[i]==1)a++;
      else b++;
    }    
    while(q--){
      ll l,r;
      cin>>l>>r;
      if(l==1){
        if(v[r-1]==1)v[r-1]=0,a--,b++;
        else v[r-1]=1,a++,b--;
      }
      else{
        if(r<=a)cout<<1;
        else cout<<0;
        cout<<"\n";
      }
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
// cin>>t;
while(t--)
{
solve();  

}
 
} 