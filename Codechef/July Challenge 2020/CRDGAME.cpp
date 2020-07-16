
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
#define M 10004
using u64= uint64_t;




int main()
{
fast
ll t=1LL;
cin>>t;
while(t--)
{
   ll n;
   cin>>n;
   ll c=0LL,m=0LL;
   ll chef=0LL,monti=0LL;
   ll x,y;
   for(int i=0;i<n;i++){
       cin>>x>>y;
       c=0;m=0;
       while(x){
           c+=x%10;
           x/=10;
       }
       while(y){
           m+=y%10;
           y/=10;
       }
        if(c>m)chef++;
        else if(m>c)monti++;
        else chef++,monti++;
   }
   if(chef>monti)cout<<0<<" "<<chef;
   else if(monti>chef)cout<<1<<" "<<monti;
   else cout<<2<<" "<<chef;
   cout<<"\n";

}
} 
