//Concept used: Ternary search

#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define wr(i) cout<<#i<<" = "<<i<<",  ";
#define wre(i) cout<<#i<<"  =  "<<i<<endl;
#define all(v) v.begin(),v.end()
typedef long long ll;
#define lim 1000000007
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

 
double func(double val,vector<pair<double,double>>v){
    double ans=0LL,mx=0.0,mn=100000000001.0;
    for(auto x:v){
        mx=max(mx,(double)(x.second+x.first*val));
        mn=min(mn,(double)(x.second+x.first*val));
    }
    // wr(ans);
    ans=mx-mn;
    return ans;
}

double ternary(double l,double r,vector<pair<double,double>>v){
    double eps=1e-9;
    while(r-l>eps){
        double m1=l+(r-l)/3;
        double m2=r-(r-l)/3;
        if(func(m1,v)<func(m2,v))r=m2;
        else l=m1;
    }
    double ans=func(l,v);
    return ans;

}
int main()
{
fast
ll t=1;
// cin>>t;
while(t--)
{
   double n,k;
   cin>>n>>k;
   vector<pair<double,double>>v(n);
   for(int i=0;i<n;i++)cin>>v[i].first>>v[i].second;
   cout<<fixed<<setprecision(6)<<ternary(0.0,k,v)<<"\n";
   
}
} 
