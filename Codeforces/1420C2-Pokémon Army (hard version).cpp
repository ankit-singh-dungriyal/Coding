// By 'Anki'
 
#include<bits/stdc++.h>
// #include<iostream>
// #include<thread>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define mt make_tuple 
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



int main()
{
fast
// #ifndef ONLINE_JUDGE
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
// #endif
ll t=1LL;
cin>>t;

while(t--)
{
ll n,q;
cin>>n>>q;
vector<ll>v(n);
for(auto &x:v)cin>>x;
vector<ll>a(n+1);
a[0]=v[0];
ll ans=0LL;
for(int i=1;i<n;i++)a[i]=v[i]-v[i-1];
for(auto x:a)ans+=max(0LL,x);

cout<<ans<<"\n";
while(q--){
    ll l,r;
    cin>>l>>r;
    l--;r--;
    if(l==r){cout<<ans<<"\n";continue;}
    ans-=max(0LL,a[l]);
    ans-=max(0LL,a[l+1]);
    if(r-l>1)
    ans-=max(0LL,a[r]);
    if(r+1<n)ans-=max(0LL,a[r+1]);
    // wr(ans)
    swap(v[l],v[r]);
    if(l==0)a[l]=v[l];
    else a[l]=v[l]-v[l-1];
    a[l+1]=v[l+1]-v[l];
    a[r]=v[r]-v[r-1];
    if(r+1<n)a[r+1]=v[r+1]-v[r];
    ans+=max(0LL,a[l]);
    ans+=max(0LL,a[l+1]);
    if(r-l>1)
    ans+=max(0LL,a[r]);
    if(r+1<n)ans+=max(0LL,a[r+1]);
    cout<<ans<<"\n";
}

}
 
} 
