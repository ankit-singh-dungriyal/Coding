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
ll n,s;
cin>>n>>s;
if(dig_sum(n)<=s){cout<<0<<"\n";}
else{
    ll n1=n;
    ll k=10;
    ll ans=0LL;
    while(true){
        n1=n/k;
        ans+=(n1+1)*k-n;
        n=(n1+1)*k;
        k*=10;
        if(dig_sum(n)<=s)break;
    }
    cout<<ans<<"\n";
}
}
} 
