// E. Restorer Distance (Codeforces Round #643 (Div. 2))
// Concepts used: Ternary search, Two Pointer, Basic Mathematic.
// 'By Anki'

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

ll func(ll val,ll n,ll a,ll b,ll c,vector<ll>v){
    ll ans=0LL;
    if(a+b<=c){
        for(auto x:v){
            if(x>val)ans+=(x-val)*b;
            else ans+=(val-x)*a;
        }
    }
    else
    {
        int i=0,j=n-1;
        while(i<j){
            if(v[i]>val)break;
            if(v[j]<val)break;
            ll tmp=min(val-v[i],v[j]-val);
            v[j]-=tmp;
            v[i]+=tmp;
            ans+=tmp*c;
            if(v[j]==val)j--;
            if(v[i]==val)i++;
        }
        if(v[i]>val){
            for(;i<=j;i++)ans+=(v[i]-val)*b;
        }
        else if(v[j]<val){
            for(;j>=i;j--)ans+=(val-v[j])*a;
        }
    }
    // wr(ans);
    return ans;
}

ll ternary(ll l,ll r, vector<ll>v,ll n, ll a, ll b,ll c){
    while(r-l>2){
        ll m1=l+(r-l)/3;
        ll m2=r-(r-l)/3;
        // wr(m1)wre(m2)
        if(func(m1,n,a,b,c,v)<func(m2,n,a,b,c,v))r=m2;
        else l=m1;
    }
    ll ans=func(l,n,a,b,c,v);
    for(int i=l;i<=r;i++)ans=min(ans,func(i,n,a,b,c,v));
    return ans;
}

int main()
{
fast
ll t=1;
// cin>>t;
while(t--)
{
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<ll>v(n);
    for(auto &x:v)cin>>x;
    sort(all(v));
    cout<<ternary(v[0],v[n-1],v,n,a,b,c)<<"\n";
    // ll ans;
    // for(int i=v[0];i<=v[n-1];i++)ans=func(i,n,a,b,c,v);
    
}
} 
