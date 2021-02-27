/*
Contest Id: 1445
Submission Id: 108598300
Date & Time: 27/02/2021 15:46:53
Tags/Concept used: ['greedy', 'sortings']
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
    vector<ll>a(n),b(n);
    for(auto &x:a)cin>>x;
    for(auto &x:b)cin>>x;
    sort(all(a));
    sort(all(b),greater<ll>());
    for(int i=0;i<n;i++)if(a[i]+b[i]>k){
        cout<<"No\n";
        return;
    }
    cout<<"Yes\n";
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