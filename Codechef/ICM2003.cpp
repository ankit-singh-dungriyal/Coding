// Concept used: Precision, Ternary search

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

 
double func(double val,double b,double c){
    double ans=(val*val+b*val+c)/sin(val);
    // wr(ans);
    return ans;
}

double ternary(double l,double r,double b,double c){
    double eps=1e-9;
    while((r-l)>eps){
        double m1=l+(r-l)/3;
        double m2=r-(r-l)/3;
        if(func(m1,b,c)<func(m2,b,c))r=m2;
        else l=m1;
    }
    double ans=func((l+r)/2,b,c);
    return ans;

}
int main()
{
fast
ll t=1;
cin>>t;
while(t--)
{
   double b,c;
   cin>>b>>c;
   double pi=3.1415926535897932385;
   cout<<fixed<<setprecision(10)<<ternary(0+1e-3,pi-1e-3,b,c)<<"\n";
   
   
}
} 
