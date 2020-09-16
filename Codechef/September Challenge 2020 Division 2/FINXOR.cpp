// By 'Anki'
// Concept used: bit shift, maths

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
// fast
ll t=1LL;
cin>>t;

while(t--)
{
ll n,ans;
cin>>n;
cout<<endl;
// ll r=pow(2,20);
// cout<<r<<" ";
ll k=pow(2,20);
cout<<1<<" "<<k<<endl;
cout.flush();
cin>>ans;
// if(ans==-1)for(;;);
cout<<endl;
ll sum=ans-k*n;
// wr(sum)
ll res=0LL;
if(sum &1)res+=1;
for(ll i=2,j=1;j<20;i=i*2,j++){
    cout<<1<<" "<<i<<endl;
    cout.flush();
    cin>>ans;
    // if(ans==-1)for(;;);
    cout<<endl;
    ll dif=(ans-sum)/i;
    ll val=(n-dif)/2;
    res+=(val & 1)<<j;
    // wr(res)
}
cout<<2<<" "<<res<<endl;
ll x;
cin>>x;
// if(x==-1)for(;;);
cout<<endl;
cout.flush();


}
} 
