// Concept used: basic 2d-dp
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
 
 
int main()
{
fast
ll t=1;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    ll a[n][n];
    string s[n];
    for(int i=0;i<n;i++)cin>>s[i];
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)a[i][j]=s[i][j]-'0';
    bool f=true;
    if(f)
    {
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1;j++){
                if(a[i][j]==1){
                    if(a[i+1][j]==0&&a[i][j+1]==0){
                        f=false;
                        break;
                    }
                }
                if(!f)break;
            }
            if(!f)break;
        }
    }
    if(f)cout<<"YES\n";
    else cout<<"NO\n";
    
}
} 
