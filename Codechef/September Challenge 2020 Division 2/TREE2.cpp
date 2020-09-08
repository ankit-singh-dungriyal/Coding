// By 'Anki'

#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define wr(i) cout<<#i<<" = "<<i<<",  ";
#define wre(i) cout<<#i<<"  =  "<<i<<endl;
#define all(v) v.begin(),v.end()
typedef long long ll;
#define lim 1000000000000000LL
typedef unsigned long long ull;
#define M 200005LL
#define F first
#define S second
using u64= uint64_t;
 

int main()
{
fast
ll t=1LL;
cin>>t;

while(t--)
{
ll n;
cin>>n;
set<ll>s;
ll x;
for(int i=0;i<n;i++)cin>>x,s.insert(x);
ll ans=s.size();
if(*s.begin()==0 )ans--;
cout<<ans<<"\n";

}
} 
