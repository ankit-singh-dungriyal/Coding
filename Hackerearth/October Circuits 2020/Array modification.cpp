// By 'Anki'
// Concept used: dp

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
#define M 1003
#define N 30
#define F first
#define S second
using u64= uint64_t;


void solve(){
    int n;
    cin>>n;
    vector<ll>v(n);
    for(auto &x:v)cin>>x;
    vector<ll>a(n),b(n);
    a[0]=v[0];
    for(int i=1;i<n;i++)a[i]=v[i]+a[i-1]/2;
    b[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--)b[i]=v[i]+b[i+1]/2;
    vector<ll>ans(n);
    ans[0]=max(a[0],b[0]);
    ans[n-1]=max(a[n-1],b[n-1]);
    for(int i=1;i<n-1;i++)ans[i]=v[i]+a[i-1]/2+b[i+1]/2;
    cout<<*max_element(all(ans));
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
