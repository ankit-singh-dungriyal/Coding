// By 'Anki'
// Concept used: binary search, sorting

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
#define N 30
#define F first
#define S second
using u64= uint64_t;


ll func(vector<ll>v, ll dif){
    ll ans=1;
    ll pos=0;
    for(int i=1;i<v.size();i++){
        if(v[i]-v[pos]>=dif)ans++,pos=i;
    }
    return ans;
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
 ll n,c;
 cin>>n>>c;
 vector<ll>v(n);
 for(auto &x:v)cin>>x;
 sort(all(v));
 ll l=1,r=v[n-1];
//  wr(l)wr(r)
 ll ans=0LL;
 while(l<=r){
     ll mid=(l+r)/2;
     ll res=func(v,mid);
     if(res<c)r=mid-1;
     else l=mid+1,ans=max(ans,mid);
 }
 cout<<ans<<"\n";
}
 
} 
