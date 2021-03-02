/*
Contest Id: 1476
Submission Id: 108863263
Date & Time: 02/03/2021 14:51:46
Tags/Concept used: ['binary search', 'constructive algorithms', 'greedy', 'math']
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
    if(k<n){
      ll tmp=n/k;
      if(n%k!=0)tmp++;
      k=k*tmp;

    }
    ll ans=k/n;
    if(k%n!=0)ans++;
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