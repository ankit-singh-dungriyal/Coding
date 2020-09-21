// By 'Anki'
 
#include<bits/stdc++.h>
#include<thread>
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
#define M 1000006
#define F first
#define S second
using u64= uint64_t;
 
 
 
int main()
{
fast
ll t=1LL;
// cin>>t;
 
while(t--)
{
ll n;
cin>>n;
ll ans=0LL;
while(n>1)n=(n+2)/3,ans++;
cout<<ans;
}
 
} 
