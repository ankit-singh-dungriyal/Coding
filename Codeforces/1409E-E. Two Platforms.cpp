// By 'Anki'
// Concept used: dp, two pointer

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
 

ll dig_sum(ll n){
    ll sum=0LL;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main()
{
fast
ll t=1LL;
cin>>t;

while(t--)
{
ll n,k;
cin>>n>>k;
vector<ll>a(n),b(n);
for(auto &x:a)cin>>x;
for(auto &x:b)cin>>x;
sort(all(a));
vector<ll>res(n);
ll l,r,sum=0LL,ans=0LL;
ll i=0,j=0;
while(j<n){
    sum=(a[j]-a[i]);
    while(sum>k)sum=(a[j]-a[++i]);
    ans=max(ans,(j-i+1));
    // wr(ans)
    res[j++]=ans;
}
i=n-1,j=n-1;
ll tmp=0LL;
while(j>0){
    sum=(a[i]-a[j]);
    while(sum>k)sum=(a[--i]-a[j]);
    tmp=max(tmp,(i-j+1));
    ans=max(ans,res[j-1]+tmp);
    j--;
    // wr(tmp)
}
cout<<ans<<"\n";

}
} 
