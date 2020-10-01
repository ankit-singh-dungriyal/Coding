// By 'Anki'
 
#include<bits/stdc++.h>
// #include<thread>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define wr(i) cout<<#i<<" = "<<i<<",  ";
#define wre(i) cout<<#i<<"  =  "<<i<<endl;
#define all(v) v.begin(),v.end()
typedef long long ll;
#define lim 1000000000000000000LL
typedef unsigned long long ull;
#define M 1003
#define N 30
#define F first
#define S second
using u64= uint64_t;

int main()
{
fast
// #ifndef ONLINE_JUDGE
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
// #endif
ll t=1LL;
cin>>t;
 
while(t--)
{
   ll n,l;
   cin>>n>>l;
   vector<ll>v(n+2);
   cout<<fixed<<setprecision(18);
   v[0]=0;
   for(int i=1;i<=n;i++)cin>>v[i];
   v[n+1]=l;
   map<ll,pair<double,double>>m1,m2;
   double s=1.0;
   double tim=0.0;
   m1[0]=mp(0.0,1.0);
   for(int i=1;i<=n+1;i++){
       tim+=(double)(v[i]-v[i-1])/s;
       s++;
       m1[v[i]]=mp(tim,s);
   }
   tim=0.0;
   s=1.0;
   m2[v[n+1]]=mp(0.0,1.0);
   tim+=(double)(l-v[n]);
   s++;
   m2[v[n]]=mp(tim,s);
   for(int i=n-1;i>=1;i--){
       tim+=(double)(v[i+1]-v[i])/s;
       s++;
       m2[v[i]]=mp(tim,s);
   }
    double ans=0.0,tmp=0.0;
   for(int i=1;i<=n+1;i++){
       if(m1[v[i]].F>m2[v[i]].F){
        //    wr(i)
           double tim_d=m2[v[i]].F-m1[v[i-1]].F;
           double dif=v[i]-v[i-1];
           if(tim_d>=0)
           dif-=(m1[v[i-1]].S*tim_d);
           else dif-=(m2[v[i]].S*abs(tim_d));
        //    wr(m2[v[i]].S)
        //    wr(tim_d)
        //    wr(dif) wr(m1[v[i-1]].S) wr(m2[v[i]].S) wr(m1[v[i]].F)
           tmp=(double)dif/(double)(m1[v[i-1]].S+m2[v[i]].S);
           ans=(double)(tmp+m1[v[i-1]].F);
           if(tim_d>0)ans+=tim_d;
           break;
       }
   }
//    wr(tmp);
cout<<fixed<<setprecision(15);
   cout<<ans<<"\n";
   
  
}
 
} 
