// Concept used: Fibonacci,  Matrix Exponentiation, Modular arithmetic
// ' By Anki' 

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
// #define lim 10LL
#define M 1000006
 
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

void mul(ll ans[][2],ll unit[][2]){
    ll tmp[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            tmp[i][j]=0LL;
            for(int k=0;k<2;k++)tmp[i][j]+=ans[i][k]*unit[k][j];
            tmp[i][j]=tmp[i][j]%lim;
        }
    }
    for(int i=0;i<2;i++)for(int j=0;j<2;j++)ans[i][j]=tmp[i][j];
}

ll fib(ll n){
    ll unit[2][2]={{0,1},{1,1}};
    ll ans[2][2]={{1,0},{0,1}};
    while(n>0){
        if(n&1)
        mul(ans,unit);
        mul(unit,unit);
        n=n>>1;
    }
    ll res=ans[0][1]%lim;
    return res;
}

int main()
{
fast
ll t=1;
cin>>t;
while(t--)
{
    ll n,m;
    cin>>n>>m;
    ll ans=(fib(m+2)-fib(n+1))%lim;
    if(ans<0)ans+=lim;
    cout<<ans<<"\n";
}
} 
