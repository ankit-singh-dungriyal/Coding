// Concept used : MillerRabin Primality_test, uint64_t multiplication under modulo of unit64_t, binary exponentiation
// 'By Anki'

#include<bits/stdc++.h>
// #include<iostream>
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
#define M 1000006
using u64= uint64_t;
// using i128= __int128;
// typedef unsigned int uint128_t __attribute__((mode(TI)));
 
ll gcd(ll a,ll b){
    return b?gcd(b,a%b):a;
}
 
ll fact(ll n)
{
    ll ans=1LL;
    while(n)
    ans*=(n--);
    return ans;

}

u64 mul( u64 a, u64 b, u64 m ) {

        if(!b) return 0;

        u64 res=2 * mul( a, b / 2, m ) % m;
        // wr(res)
        if (b&1)
            res=(res+a)%m;

        return res;
    }

u64 power(u64 a,u64 d,u64 n){
    u64 ans=1;
    while(d){
        if(d&1)ans=mul(ans,a,n);
        a=mul(a,a,n);
        d>>=1;
    }
    // wr(ans);
    return ans;
}
bool composite(u64 a,u64 d,u64 s,u64 n){
    u64 x=power(a,d,n);
    if(x==1||x==n-1)return false;
    for(int i=1;i<s;i++){
        x=mul(x,x,n);
        if(x==n-1)return false;
    }
    return true;
}

bool millerrabin(u64 n){
    if(n<4)return n==2||n==3;
    u64 d=n-1;
    u64 s=0LL;
    while(!(d&1))d>>=1,s++;
    for(u64 a:{2,3,5,7,11,13,17,19,23,29,31,37}){
        if(n==a)return true;
        if(composite(a,d,s,n))return false;
    }
    return true;
}

int main()
{
fast
ll t=1;
cin>>t;
while(t--)
{
    u64 n;
    cin>>n;
    // n=pow(2,63);
    // cout<<n<<"\n";
    // for(ull i=n;i>=n-1000;i--)if(millerrabin(i))cout<<i<<" ";
    if(millerrabin(n))cout<<"YES\n";
    else cout<<"NO\n";

    
}
} 
