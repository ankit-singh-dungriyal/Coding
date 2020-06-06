// Concept used: basic logics, maths and string
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
#define M 100006LL
using u64= uint64_t;
// using i128= __int128;
// typedef unsigned int uint128_t __attribute__((mode(TI)));
 
/* 
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
 
ll phi(ll n){
    ll res=n;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0)n/=i;
            res-=res/i;
        }
    }
    if(n>1)res-=res/n;
    return res;
}

ll a[100][100];
void sparse(vector<ll>v)
{
    ll n=v.size();
    ll k=log2(n)+1;
    for(int i=0;i<n;i++)a[i][0]=v[i];
    for(int j=1;j<=k;j++)
    {
        for(int i=0;i+(1<<j)<=n;i++)
        a[i][j]=a[i][j-1]+a[i+(1<<(j-1))][j-1];
    }
}
*/
int main()
{
fast
ll t=1LL;

for(cin>>t;t;t--){
   string s;
   cin>>s;
   ll ans=0LL;
   for(int i=0;i<s.length();i++)
       if((s[i]=='x'&&s[i+1]=='y')||(s[i]=='y'&&s[i+1]=='x'))ans++,i++;
   cout<<ans<<"\n";
} 
}
