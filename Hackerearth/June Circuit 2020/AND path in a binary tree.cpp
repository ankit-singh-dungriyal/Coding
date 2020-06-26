// Concept used: basic dp, Series
// 'By Anki'
 
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define wr(i) cout<<#i<<" = "<<i<<",  ";
#define wre(i) cout<<#i<<"  =  "<<i<<endl;
#define all(v) v.begin(),v.end()
typedef long long ll;
#define lim 1000000007LL
typedef unsigned long long ull;
#define PI 3.14159265358
#define M 100006LL
using u64= uint64_t;
typedef double db;
 
 
int main()
{
fast
ll t=1LL;
cin>>t;
ll ans[100005];
ans[0]=0LL;
for(int i=0;i<100005;i++)ans[i]=ans[i/2]+i;
while (t--)
{
    ll n;
    cin>>n;
    cout<<ans[(n+1)/4]<<"\n";
}
 
}
