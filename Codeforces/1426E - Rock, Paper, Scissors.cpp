// By 'Anki'
// Concept used: brute force, maths
 
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

int main()
{
fast
// #ifndef ONLINE_JUDGE
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
// #endif
ll t=1LL;
// cin>>t;
 
while(t--)
{
   ll n;
   cin>>n;
   vector<ll>a(3),b(3);
   for(auto &x:a)cin>>x;
   for(auto &x:b)cin>>x;
   ll mx=min(a[0],b[1])+min(a[1],b[2])+min(a[2],b[0]);
    vector<pair<ll,ll>>v;
    for(int i=0;i<3;i++)v.pb(mp(i,i));
    v.pb(mp(1,0));
    v.pb(mp(2,1));
    v.pb(mp(0,2));
    sort(all(v));
    ll mn=INT64_MAX;
    while (next_permutation(all(v)))
    {
        vector<ll>a1(3),b1(3);
        ll sum=0LL;
        for(int i=0;i<3;i++)a1[i]=a[i],b1[i]=b[i];
        for(auto x:v){
            sum+=min(a1[x.F],b1[x.S]);
            a1[x.F]=a1[x.F]-b1[x.S];
            b1[x.S]=-a1[x.F];
            a1[x.F]=max(0LL,a1[x.F]);
            b1[x.S]=max(0LL,b1[x.S]);
        }
        mn=min(mn,n-sum);
    }
    

    cout<<mn<<" "<<mx<<"\n";
}
 
} 
