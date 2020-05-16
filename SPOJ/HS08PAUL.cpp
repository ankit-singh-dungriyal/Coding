// Tags: Sieve of Eratosthenes, dp

#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define wr(i) cout<<#i<<" = "<<i<<",  ";
#define wre(i) cout<<#i<<"  =  "<<i<<endl;
#define all(v) v.begin(),v.end()
typedef long long ll;
// #define lim 1000000007
#define M 10000006
ll lim=10000007;

bool f[2*M+1];
void prime(){
    ll n=2*M;
    memset(f,true,sizeof(f));
    f[0]=f[1]=false;
    for(int i=2;i*i<=n;i++)
    if(f[i])for(int j=i*i;j<=n;j+=i)f[j]=false;
}

vector<ll>ps;
vector<ll>pq;
void perf()
{
    for(int i=1;i*i<=M;i++)
    ps.pb(i*i);
    for(int i=1;i*i*i*i<=M;i++)pq.pb(i*i*i*i);

}
int main()
{
fast
ll t;
cin>>t;
prime();
perf();
vector<ll>ans(2*M,0);
ans[1]=0;
ll cn=0LL;
for(auto x:ps){
    for(auto y:pq){
        if(f[x+y]){
            ans[x+y]=1;
        }
    }
}

for(int i=1;i<=2*M;i++)
if(ans[i])ans[i]=ans[i-1]+1;
else ans[i]=ans[i-1];


while(t--)
{
 ll n;
 cin>>n;
 cout<<ans[n]<<"\n";

}
}
